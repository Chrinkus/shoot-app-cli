#ifndef SHOOT_APP_H
#define SHOOT_APP_H

#include <memory>
#include <controller.hpp>

class Shoot_app {
public:
    Shoot_app();

    int run();

    static void print_hey() { std::cout << "hey~!\n"; }
private:
    std::unique_ptr<Controller> ctrl;
};

#endif // SHOOT_APP_H
