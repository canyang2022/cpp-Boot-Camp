cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bookShop VERSION 1.0)

add_library(bookShoplib STATIC src/bookShop.cpp)
target_include_directories(bookShoplib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(bookDisplaylib STATIC src/bookDisplay.cpp)
target_include_directories(bookDisplaylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_library(menyDisplaylib STATIC src/menyDisplay.cpp)
target_include_directories(menyDisplaylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(searchBookslib STATIC src/searchBooks.cpp)
target_include_directories(searchBookslib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(searchBooksWithTittlelib STATIC src/searchBooksWithTittle.cpp)
target_include_directories(searchBooksWithTittlelib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(inputErrorHandlinglib STATIC src/inputErrorHandling.cpp)
target_include_directories(inputErrorHandlinglib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_executable(bookShop main.cpp)
target_link_libraries(bookShop PUBLIC bookShoplib)
target_link_libraries(bookShop PUBLIC bookDisplaylib)
target_link_libraries(bookShop PUBLIC menyDisplaylib)
target_link_libraries(bookShop PUBLIC searchBookslib)
target_link_libraries(bookShop PUBLIC searchBooksWithTittlelib)
target_link_libraries(bookShop PUBLIC inputErrorHandlinglib)



