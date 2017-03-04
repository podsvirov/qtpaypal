find_package(Qt5 CONFIG REQUIRED COMPONENTS
   Network Widgets)

find_package(KDSoap CONFIG REQUIRED)

if(QtPayPal_INSTALL)
   include(GNUInstallDirs)
endif()

add_subdirectory(client)
add_subdirectory(server)
