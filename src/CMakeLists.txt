cmake_minimum_required (VERSION 3.5)

project(main)

find_package(Glog REQUIRED)

# 创建可执行文件
add_executable(main main.cpp)

target_link_libraries (${PROJECT_NAME} glog)