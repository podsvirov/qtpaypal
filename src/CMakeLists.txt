find_package(Qt5 CONFIG REQUIRED COMPONENTS
   Network Widgets)

get_target_property(QtPayPal_LIBRARY_TYPE Qt5::Core TYPE)
string(REPLACE "_LIBRARY" "" QtPayPal_LIBRARY_TYPE "${QtPayPal_LIBRARY_TYPE}")

find_package(KDSoap CONFIG REQUIRED)

if(QtPayPal_INSTALL)
   include(GNUInstallDirs)
endif()

add_subdirectory(paypal)

add_subdirectory(client)
add_subdirectory(server)
