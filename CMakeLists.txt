cmake_minimum_required(VERSION 3.0)

project(QtPayPal
    VERSION 0.0.0.0
    LANGUAGES CXX)

option(QtPayPal_AUTOSVC "Use kdwsdl2cpp to generate service files" ON)
option(QtPayPal_INSTALL "Use install command" ON)

add_subdirectory(src)
