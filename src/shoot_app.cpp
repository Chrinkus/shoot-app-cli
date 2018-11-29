#include <shoot_app.hpp>

Shoot_app::Shoot_app()
    : view{std::make_unique<View>()}
    , ctrl{std::make_unique<Controller>()}
{
    ctrl->connect_view(view.get());
}

int Shoot_app::run()
{
    while (true)
        ctrl->get_command();

    return 0;
}
