#ifndef SA_VIEW_H
#define SA_VIEW_H

#include <iostream>

class View {
public:
    View(std::ostream& o = std::cout, std::string s = "> ");

    void print_message(const std::string& s = "");
private:
    std::ostream& os;
    std::string prompt;
};

#endif // SA_VIEW_H
