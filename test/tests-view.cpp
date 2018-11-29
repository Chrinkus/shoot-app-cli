#include <catch2/catch.hpp>

#include <view.hpp>

#include <sstream>

TEST_CASE("View inserts default string into stream", "[View]") {
    std::stringstream ss;
    std::string p {"$ "};
    View view {ss, p};
    view.print_message();
    REQUIRE(ss.str() == p);
}
