#ifndef CLI_VIEW_H
#define CLI_VIEW_H

#include <iostream>

class View {
public:
    explicit View(std::ostream& o = std::cout);

    void print_message(const std::string& s) const;
private:
    std::ostream& os;
};

#endif // CLI_VIEW_H
