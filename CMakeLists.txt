cmake_minimum_required(VERSION 3.16)

project(orderbook)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(orderbook
    src/main.cpp
    src/order_book.cpp
)