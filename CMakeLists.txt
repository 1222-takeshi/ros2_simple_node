cmake_minimum_required(VERSION 3.14)
project(simple_ros2_package)

find_package(ament_cmake_auto REQUIRED)
find_package(std_msgs REQUIRED)

ament_auto_find_build_dependencies()

ament_auto_add_executable(simple_subscriber
  src/simple_subscriber_main.cpp
  src/simple_subscriber.cpp
)

ament_auto_add_executable(simple_publisher
  src/simple_publisher_main.cpp
  src/simple_publisher.cpp
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package(
  INSTALL_TO_SHARE
  launch
)
