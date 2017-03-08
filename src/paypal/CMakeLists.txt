configure_file("qpaypalconfig.hpp.in" "${CMAKE_CURRENT_LIST_DIR}/qpaypalconfig.hpp")

set(PayPal_HEADERS
   qpaypalconfig.hpp
   qpaypalglobal.hpp
   qclient.hpp)

set(PayPal_PRIVATE_HEADERS
   qclient_p.hpp)

set(PayPal_SOURCES
   qclient.cpp)

if(QtPayPal_CLIENT_SOAP)
   list(APPEND PayPal_HEADERS qsoapclient.hpp)
   list(APPEND PayPal_PRIVATE_HEADERS qsoapclient_p.hpp)
   list(APPEND PayPal_SOURCES qsoapclient.cpp)
endif()

add_library(PayPal ${QtPayPal_LIBRARY_TYPE}
   ${PayPal_HEADERS} ${PayPal_PRIVATE_HEADERS}
   ${PayPal_SOURCES})

target_link_libraries(PayPal
   PUBLIC Qt5::Core)
if(QtPayPal_CLIENT_SOAP)
   target_link_libraries(PayPal PRIVATE KDPayPalClient)
endif()

set_target_properties(PayPal PROPERTIES
   AUTOMOC TRUE
   OUTPUT_NAME Qt5PayPal)

set_property(TARGET PayPal APPEND PROPERTY
   COMPILE_DEFINITIONS QT_BUILD_PAYPAL_LIB)

if(QtPayPal_INSTALL)
   include("CPackLists.txt")
endif()
