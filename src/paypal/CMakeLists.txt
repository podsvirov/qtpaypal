configure_file("qpaypalconfig.hpp.in" "${CMAKE_CURRENT_LIST_DIR}/qpaypalconfig.hpp")

set(PayPal_HEADERS
   qpaypalconfig.hpp
   qpaypalglobal.hpp
   qclientbase.hpp)

set(PayPal_PRIVATE_HEADERS
   qclientbase_p.hpp)

set(PayPal_SOURCES
   qclientbase.cpp)

add_library(PayPal ${QtPayPal_LIBRARY_TYPE}
   ${PayPal_HEADERS} ${PayPal_PRIVATE_HEADERS}
   ${PayPal_SOURCES})

target_link_libraries(PayPal
   #PRIVATE KDPayPalClient
   PUBLIC Qt5::Core)

set_target_properties(PayPal PROPERTIES
   AUTOMOC TRUE
   OUTPUT_NAME Qt5PayPal)

set_property(TARGET PayPal APPEND PROPERTY
   COMPILE_DEFINITIONS QT_BUILD_PAYPAL_LIB)

if(QtPayPal_INSTALL)
   include("CPackLists.txt")
endif()
