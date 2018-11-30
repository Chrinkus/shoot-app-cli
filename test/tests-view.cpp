#include <catch2/catch.hpp>

#include <view.hpp>

#include <sstream>

TEST_CASE("print_message inserts default string into stream",
          "[View::print_message]") {

    std::stringstream ss;
    View view {ss};
    view.print_message("Hello");
    REQUIRE(ss.str() == "Hello");
}
