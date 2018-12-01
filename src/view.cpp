#include <view.hpp>

View::View(std::ostream& o)
    : os{o} { }

void View::print_message(const std::string& s) const
{
    os << (s.empty() ? prompt : s);
}

void View::print_error(const std::string& s) const
{
    std::cerr << s;
}
