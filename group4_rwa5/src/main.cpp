#include "rclcpp/rclcpp.hpp"
#include "group4_rwa5/waypoint_reacher.hpp"  // Adjust to your actual header file location

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WaypointReacher>());
    rclcpp::shutdown();
    return 0;
}
