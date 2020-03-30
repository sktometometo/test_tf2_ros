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

add_executable(test_node_00 src/test_node_00.cpp)
target_link_libraries(test_node_00
  ${catkin_LIBRARIES}
)

add_executable(test_node_01 src/test_node_01.cpp)
target_link_libraries(test_node_01
  ${catkin_LIBRARIES}
)

add_executable(test_node_02 src/test_node_02.cpp)
target_link_libraries(test_node_02
  ${catkin_LIBRARIES}
)

add_executable(test_node_03 src/test_node_03.cpp)
target_link_libraries(test_node_03
  ${catkin_LIBRARIES}
)

add_executable(test_node_04 src/test_node_04.cpp)
target_link_libraries(test_node_04
  ${catkin_LIBRARIES}
)
