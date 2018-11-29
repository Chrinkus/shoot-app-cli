#ifndef SA_CONTROLLER_H
#define SA_CONTROLLER_H

#include <iostream>
#include <functional>
#include <view.hpp>

class Controller {
public:
    Controller(std::istream& i = std::cin) : is{i} { }

    void get_command() const;
    void connect_view(View* v) { view = v; }

private:
    std::istream& is;
    View* view;

    void exec(const std::string& s) const;
};

#endif // SA_CONTROLLER_H
