#include <catch2/catch.hpp>

#include <view.hpp>

#include <sstream>

TEST_CASE("View inserts default string into stream", "[View]") {
    std::stringstream ss;
    View view {ss};
    view.print_message("Hello");
    REQUIRE(ss.str() == "Hello");
}
