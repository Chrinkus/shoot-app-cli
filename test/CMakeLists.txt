find_package(Catch2 REQUIRED)

add_executable(tests tests-main.cpp)
target_compile_features(tests PRIVATE cxx_std_14)
target_link_libraries(tests PUBLIC Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(tests)
