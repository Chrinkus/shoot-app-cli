#ifndef CLI_CONTROLLER_H
#define CLI_CONTROLLER_H

#include <iostream>
#include <memory>
#include <unordered_map>
#include <view.hpp>

using Callback = void (*)(void);

class Controller {
public:
    explicit Controller(std::istream& i = std::cin);

    void get_command() const;

    void register_command(std::string name, Callback cb);

private:
    std::istream& is;
    std::unique_ptr<View> view;
    std::unordered_map<std::string,Callback> command_table;

    void exec(const std::string& s) const;
};

#endif // CLI_CONTROLLER_H
