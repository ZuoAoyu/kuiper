cmake_minimum_required(VERSION 3.18)
project(kuiper)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GTest CONFIG REQUIRED)
find_package(glog CONFIG REQUIRED)

# aux 是 auxiliary（辅助）的缩写。此命令用于将指定目录中的所有源文件添加到变量中。
#aux_source_directory(./test DIR_TEST_ARMA)
# 使用 file(GLOB) 替代 aux_source_directory
file(GLOB DIR_TEST ./test/*.cpp)

add_executable(kuiper main.cpp ${DIR_TEST})
target_link_libraries(
        kuiper
        PRIVATE
        GTest::gtest
        glog::glog
)

enable_testing()
add_test(NAME kuiper_test COMMAND kuiper)
