#include <model.hpp>

Model::Model()
    : ctrl{std::make_unique<Controller>()}
    , view{std::make_unique<View>()}
{
}

int Model::run()
{
    running = true;

    while (running)
        ctrl->get_command();

    return 0;
}
