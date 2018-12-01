#include <controller.hpp>

Controller::Controller(std::istream& i)
    : is{i}, view{std::make_unique<View>()}
{
    // nothing yet..
}

void Controller::get_command() const
{
    view->print_message(std::string{});
    std::string input;
    std::getline(is, input);

    exec(input);
}

void Controller::register_command(std::string name, Callback cb)
{
    auto success = command_table.insert({ std::move(name), cb }).second;
    if (!success)
        view->print_error("Command " + name + " already exists\n");
}

void Controller::exec(const std::string& name) const
{
    try {
        command_table.at(name)();
    }
    catch(std::out_of_range& e) {
        view->print_error("Command " + name + " doesn't exist\n");
    }
}

