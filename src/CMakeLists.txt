find_package(Qt5 CONFIG REQUIRED COMPONENTS
    Network Widgets)

find_package(KDSoap CONFIG REQUIRED)

add_subdirectory(client)
add_subdirectory(server)
