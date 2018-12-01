#include <shoot_app.hpp>

Shoot_app::Shoot_app()
    : ctrl{std::make_unique<Controller>()}
{
    ctrl->register_command("hey", print_hey);
}

int Shoot_app::run()
{
    while (true)
        ctrl->get_command();

    return 0;
}
