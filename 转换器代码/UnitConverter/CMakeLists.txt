#最低CMake版本要求
cmake_minimum_required(VERSION 3.10)
#项目名称 + 使用C++语言
project(UnitConverter LANGUAGES CXX)
#设置C++11标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#进入unitlib子目录，执行其中的构建规则
add_subdirectory(unitlib)
#编译主程序
add_executable(main src/main.cpp)
 # 主程序链接unitlib转换库 
target_link_libraries(main PRIVATE unitlib)
