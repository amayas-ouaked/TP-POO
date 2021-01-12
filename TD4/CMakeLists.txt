cmake_minimum_required(VERSION 3.10)
# set the project name
project(Tutorial)

# enable modern C++
set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(Main.exe main_TD.cpp)

#add_executable(Test.exe test.cpp)

#find_package(GTest REQUIRED)

#target_link_libraries(Test.exe PUBLIC GTest::GTest GTest::Main)

#target_include_directories(Test.exe PUBLIC "${PROJECT_SOURCE_DIR}")

#add_test(AllTestsInTest Test.exe)

#gtest_discover_tests(Test.exe)

#enable_testing()

