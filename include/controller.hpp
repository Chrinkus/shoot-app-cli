#ifndef CLI_CONTROLLER_H
#define CLI_CONTROLLER_H

#include <iostream>
#include <memory>
#include <view.hpp>

class Controller {
public:
    explicit Controller(std::istream& i = std::cin);

    void get_command() const;

    void set_prompt(std::string s) { prompt = std::move(s); }

private:
    std::istream& is;
    std::unique_ptr<View> view;
    std::string prompt = "> ";

    void exec(const std::string& s) const;
};

#endif // CLI_CONTROLLER_H
