# Rules to generate files
if(QtPayPal_AUTOSVC)
   add_custom_command(OUTPUT ${CMAKE_CURRENT_LIST_DIR}/PayPalSvc.hpp
      COMMAND KDSoap::kdwsdl2cpp
      ARGS ../service/PayPalSvc.wsdl -o PayPalSvc.hpp
      MAIN_DEPENDENCY ../service/PayPalSvc.wsdl
      DEPENDS KDSoap::kdwsdl2cpp ../service/PayPalSvc.wsdl
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

   add_custom_command(OUTPUT ${CMAKE_CURRENT_LIST_DIR}/PayPalSvc.cpp
      COMMAND KDSoap::kdwsdl2cpp
      ARGS -impl PayPalSvc.hpp ../service/PayPalSvc.wsdl -o PayPalSvc.cpp
      MAIN_DEPENDENCY ../service/PayPalSvc.wsdl PayPalSvc.hpp
      DEPENDS KDSoap::kdwsdl2cpp ../service/PayPalSvc.wsdl
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(client
   main.cpp
   PayPalSvc.hpp
   PayPalSvc.cpp
   MainWindow.ui
   MainWindow.hpp
   MainWindow.cpp)

set_target_properties(client PROPERTIES
   AUTOMOC TRUE
   AUTOUIC TRUE)

target_link_libraries(client
   KDSoap::kdsoap
   Qt5::Widgets)
