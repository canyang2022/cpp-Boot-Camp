cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(inputHandler VERSION 1.0)

add_library(socketCanlib STATIC include/socketcan_cpp.cpp)
target_include_directories(socketCanlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC socketCanlib)


add_library(ncurseInputlib STATIC ncurse_input.cpp)
target_include_directories(ncurseInputlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(main PUBLIC ncurseInputlib)

find_package(Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS})

target_link_libraries(main PUBLIC ${CURSES_LIBRARIES})
