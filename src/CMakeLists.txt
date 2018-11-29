add_library(view STATIC view.cpp ${PROJECT_SOURCE_DIR}/include/view.hpp)
target_compile_features(view PRIVATE cxx_std_14)

add_library(ctrl STATIC controller.cpp ${PROJECT_SOURCE_DIR}/include/controller.hpp)
target_compile_features(ctrl PRIVATE cxx_std_14)

add_library(app STATIC shoot_app.cpp ${PROJECT_SOURCE_DIR}/include/shoot_app.hpp)
target_compile_features(app PRIVATE cxx_std_14)
target_link_libraries(app PRIVATE view ctrl)

add_executable(shoot-app main.cpp)
target_compile_features(shoot-app PRIVATE cxx_std_14)
target_link_libraries(shoot-app PUBLIC app)
