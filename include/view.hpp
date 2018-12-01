#ifndef CLI_VIEW_H
#define CLI_VIEW_H

#include <iostream>

class View {
public:
    explicit View(std::ostream& o = std::cout);

    void print_message(const std::string& s) const;
    void print_error(const std::string& s) const;

    void set_prompt(std::string s) { prompt = std::move(s); }
private:
    std::ostream& os;
    std::string prompt {"> "};
};

#endif // CLI_VIEW_H
