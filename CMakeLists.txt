
cmake_minimum_required(VERSION 3.20.0)
project(RWA3 VERSION 0.1.0)


# Compilation flags
add_compile_options(-Wall)

include_directories(RWA3/include)
# Add executable
add_executable(RWA3
    RWA3/department/src/main.cpp RWA3/department/src/date.cpp RWA3/department/src/engine.cpp
    RWA3/department/src/driver.cpp
    RWA3/department/src/vehicle.cpp)

# add_custom_command(TARGET RWA3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture8
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture8"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture8
#     DEPENDS RWA3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET RWA3 PROPERTY CXX_STANDARD 17)
