
#include <ros/ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "rosconsole_echo_test", ros::init_options::AnonymousName);

  ros::NodeHandle nh;

  ros::Rate rate(1.0);

  while (ros::ok())
  {
    ROS_DEBUG_STREAM("Debug message from " << ros::this_node::getName());
    ROS_INFO_STREAM("Info message from " << ros::this_node::getName());
    ROS_WARN_STREAM("Warn message from " << ros::this_node::getName());
    ROS_ERROR_STREAM("Error message from " << ros::this_node::getName());
    ROS_FATAL_STREAM("Fatal message from " << ros::this_node::getName());

    ros::spinOnce();

    rate.sleep();
  }

  return EXIT_SUCCESS;
}
