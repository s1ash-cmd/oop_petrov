cmake_minimum_required(VERSION 3.5)

if(POLICY CMP0167)
    cmake_policy(SET CMP0167 NEW)
endif()

project(oop_petrov LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.71 REQUIRED COMPONENTS serialization)

add_executable(oop_petrov
    main.cpp
    petrov_header.h
    petrov_item.cpp
    petrov_item.h
    petrov_shop.cpp
    petrov_shop.h
    petrov_used_item.cpp
    petrov_used_item.h
)

target_link_libraries(oop_petrov PRIVATE Boost::serialization)

include(GNUInstallDirs)
install(TARGETS oop_petrov
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
