#include <ros/ros.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>

int main( int argc, char** argv )
{
    ros::init( argc, argv, "test" );
    ros::NodeHandle nh;

    double max_duration=10.0;

    // case 0: can not be compiled.
    // tf2_ros::Buffer tf_buffer(ros::Duration(max_duration));
    // tf2_ros::TransformListener tf_listener(tf_buffer);

    // case 0: can not be compiled.
    tf2_ros::Buffer tf_buffer(ros::Duration(max_duration));
    tf2_ros::TransformListener tf_listener(static_cast<tf2_ros::Buffer>(tf_buffer));

    // case 1: can not be compiled.
    // tf2_ros::Buffer tf_buffer(ros::Duration(max_duration));
    // tf2_ros::TransformListener tf_listener(tf_buffer,nh,true);

    // case 2: can be compiled.
    // ros::Duration duration(max_duration);
    // tf2_ros::Buffer tf_buffer(duration);
    // tf2_ros::TransformListener tf_listener(tf_buffer);

    // case 3: can be compiled.
    // tf2_ros::Buffer tf_buffer(ros::Duration(10.0));
    // tf2_ros::TransformListener tf_listener(tf_buffer);

    // case 4: can be compiled.
    // tf2_ros::Buffer tf_buffer(ros::Duration(max_duration),true);
    // tf2_ros::TransformListener tf_listener(tf_buffer);

}
