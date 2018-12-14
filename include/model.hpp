#ifndef SA_MODEL_HPP
#define SA_MODEL_HPP

#include <memory>
#include <controller.hpp>
#include <view.hpp>

class Model {
public:
    Model(std::istream& is, std::ostream& os);

    int run();

    void close_app() { running = false; }

private:
    std::unique_ptr<Controller> ctrl;
    std::unique_ptr<View> view;
    bool running = false;
};

#endif // SA_MODEL_HPP
