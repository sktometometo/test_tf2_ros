#include <ros/ros.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>

int main( int argc, char** argv )
{
    ros::init( argc, argv, "test" );
    ros::NodeHandle nh;

    double max_duration=10.0;

    ros::Duration duration(max_duration);
    tf2_ros::Buffer tf_buffer(duration);
    tf2_ros::TransformListener tf_listener(tf_buffer);
}
