cmake_minimum_required(VERSION 3.14)
project(simple_ros2_package)

find_package(ament_cmake_auto REQUIRED)
find_package(std_msgs REQUIRED)

ament_auto_find_build_dependencies()

# ソースコードを追加する
ament_auto_add_library(simple_ros2_package
  src/simple_publisher_main.cpp
  src/simple_subscriber_main.cpp
  src/simple_publisher.cpp
  src/simple_subscriber.cpp
)

ament_target_dependencies(simple_ros2_package
  rclcpp
  std_msgs
  )

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
