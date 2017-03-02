find_package(Qt5 CONFIG REQUIRED COMPONENTS
    Network)

find_package(KDSoap CONFIG REQUIRED)

add_subdirectory(client)
add_subdirectory(server)
