cmake_minimum_required(VERSION 3.5)

project(oop_petrov LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oop_petrov main.cpp
    petrov_item.cpp
    petrov_shop.cpp
    petrov_header.h
    petrov_item.h
    petrov_shop.h)

include(GNUInstallDirs)
install(TARGETS oop_petrov
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
