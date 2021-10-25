cmake_minimum_required(VERSION 3.5)

project(${PROJECT_NAME})

enable_testing()

find_package(GTest REQUIRED)


# 创建可执行文件
add_executable(${PROJECT_NAME}
    TestAll.cpp
    functions.h
    functions.cpp
    functionsTest.cpp
)

include_directories(${PROJECT_NAME} ${GTEST_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} libgtest.a ${GTEST_LIBRARIES} pthread)