#include <controller.hpp>

void Controller::get_command() const
{
    view->print_message(std::string{});
    std::string input;
    std::getline(is, input);

    exec(input);
}

void Controller::exec(const std::string& s) const
{
    view->print_message("Command: " + s + " received\n");
}

