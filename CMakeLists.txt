cmake_minimum_required(VERSION 3.20)
project(spacecraftcc)
set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
#FATAL_ERROR：cmake出错，停止编译和生成(信息红色)
#SEND_ERROR：cmake出错，继续编译，但是停止生成(信息红色)
#WARNING：cmake警告，继续编译(信息红色)
#AUTHOR_WARNING：开发者警告，继续编译(信息红色)
#DEPRECATION：如果使用set方法设置CMAKE_ERROR_DEPRECATED为true(不区分大小写)，编译出错，否则继续编译
#(none) or NOTICE：不设置mode，默认是NOTICE模式，不影响编译和生成，用于打印消息(信息白色)
#STATUS：编译时状态信息，左边以--开头(信息白色)
#DEBUG：针对开发人员的调试信息(信息白色)
#TRACE：日志级别的临时信息(信息白色)
#message(DEBUG "${CMAKE_BINARY_DIR}}")

add_executable(spacecraftcc main.cpp)

target_link_libraries(spacecraftcc ${CONAN_LIBS})


