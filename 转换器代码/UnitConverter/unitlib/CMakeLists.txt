#将当前目录源码编译为静态库 unitlib
add_library(unitlib STATIC
    src/unitlib.cpp
)
#公开头文件目录：链接本库的程序可自动找到头文件
target_include_directories(unitlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
