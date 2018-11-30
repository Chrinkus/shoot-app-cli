#include <shoot_app.hpp>

Shoot_app::Shoot_app()
    : ctrl{std::make_unique<Controller>()}
{
    //
}

int Shoot_app::run()
{
    while (true)
        ctrl->get_command();

    return 0;
}
