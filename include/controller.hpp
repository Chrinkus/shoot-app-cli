#ifndef CLI_CONTROLLER_H
#define CLI_CONTROLLER_H

#include <iostream>
#include <memory>
#include <view.hpp>

using Callback = void (*)(void);

class Controller {
public:
    explicit Controller(std::istream& i = std::cin);

    void get_command(View& view) const;

    void register_command(std::string name, Callback cb);

private:
    std::istream& is;

    void exec(View& view) const;
};

#endif // CLI_CONTROLLER_H
