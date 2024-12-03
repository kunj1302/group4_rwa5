cmake_minimum_required(VERSION 3.8)
project(group4_rwa5)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(bot_waypoint_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

# Include directories
include_directories(include)

# Add executable
add_executable(waypoint_reacher src/main.cpp src/waypoint_reacher.cpp)
ament_target_dependencies(waypoint_reacher
  rclcpp
  geometry_msgs
  nav_msgs
  bot_waypoint_msgs
  std_msgs
  tf2
  tf2_geometry_msgs
  
)
# Install executable
install(TARGETS waypoint_reacher
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
