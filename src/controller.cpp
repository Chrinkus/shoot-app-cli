#include <controller.hpp>

Controller::Controller(std::istream& i)
    : is{i}, view{std::make_unique<View>()}
{
    // nothing yet..
}

void Controller::get_command() const
{
    view->print_message(prompt);
    std::string input;
    std::getline(is, input);

    exec(input);
}

void Controller::exec(const std::string& s) const
{
    view->print_message("Command: " + s + " received\n");
}

