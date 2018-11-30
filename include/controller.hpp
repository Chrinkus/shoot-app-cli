#ifndef SA_CONTROLLER_H
#define SA_CONTROLLER_H

#include <iostream>
#include <functional>
#include <view.hpp>

class Controller {
public:
    Controller(const View& v, std::istream& i = std::cin)
        : view{v}, is{i} { }

    void get_command() const;

private:
    const View& view;
    std::istream& is;
    std::string prompt = "> ";

    void exec(const std::string& s) const;
};

#endif // SA_CONTROLLER_H
