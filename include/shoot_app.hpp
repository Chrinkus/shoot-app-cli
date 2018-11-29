#ifndef SHOOT_APP_H
#define SHOOT_APP_H

#include <memory>
#include <view.hpp>
#include <controller.hpp>

class Shoot_app {
public:
    Shoot_app();

    int run();
private:
    std::unique_ptr<View> view;
    std::unique_ptr<Controller> ctrl;
};

#endif // SHOOT_APP_H
