cmake_minimum_required(VERSION 3.30)
project(StockManager)

set(CMAKE_CXX_STANDARD 20)

add_executable(StockManager main.cpp
        Aktie.cpp
        Aktie.h
        HashTable.cpp
        HashTable.h
        Manager.cpp
        Manager.h
        StockData.cpp
        StockData.h)
