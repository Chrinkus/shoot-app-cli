#include <view.hpp>

View::View(std::ostream& o, std::string s)
    : os{o}, prompt{s} { }

void View::print_message(const std::string& s)
{
    os << (s.empty() ? prompt : s);
}
