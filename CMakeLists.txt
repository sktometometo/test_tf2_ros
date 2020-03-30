cmake_minimum_required(VERSION 3.5.1)
project(test_tf2_ros)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf2
  tf2_ros
)

catkin_package(
  LIBRARIES test_tf2_ros
  CATKIN_DEPENDS roscpp tf2 tf2_ros
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(test_node src/test_node.cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(test_node
  ${catkin_LIBRARIES}
)
