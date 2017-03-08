cmake_minimum_required(VERSION 3.0)

project(QtPayPal
    VERSION 0.1.0
    LANGUAGES CXX)

option(QtPayPal_CLIENT_SOAP "Enable SOAP client" ON)
option(QtPayPal_AUTOSVC "Use kdwsdl2cpp to generate service files" ON)
option(QtPayPal_INSTALL "Use install command" ON)

add_subdirectory(src)
