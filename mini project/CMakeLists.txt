cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bookShop VERSION 1.0)

add_library(bookShoplib STATIC src/bookShop.cpp)
target_include_directories(bookShoplib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(bookShop main.cpp)
target_link_libraries(bookShop PUBLIC bookShoplib)
