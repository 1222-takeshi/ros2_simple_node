#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class SimpleSubscriber : public rclcpp::Node
{
public:
  explicit SimpleSubscriber();

private:
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};
