# Rules to generate files
if(QtPayPal_AUTOSVC)
   add_custom_command(OUTPUT ${CMAKE_CURRENT_LIST_DIR}/PayPalSvc.hpp
      COMMAND KDSoap::kdwsdl2cpp
      ARGS -server ../service/PayPalSvc.wsdl -o PayPalSvc.hpp
      MAIN_DEPENDENCY ../service/PayPalSvc.wsdl
      DEPENDS KDSoap::kdwsdl2cpp ../service/PayPalSvc.wsdl
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

   add_custom_command(OUTPUT ${CMAKE_CURRENT_LIST_DIR}/PayPalSvc.cpp
      COMMAND KDSoap::kdwsdl2cpp
      ARGS -server -impl PayPalSvc.hpp ../service/PayPalSvc.wsdl -o PayPalSvc.cpp
      MAIN_DEPENDENCY ../service/PayPalSvc.wsdl PayPalSvc.hpp
      DEPENDS KDSoap::kdwsdl2cpp ../service/PayPalSvc.wsdl
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

add_executable(server
   main.cpp
   PayPalSvc.hpp
   PayPalSvc.cpp)

set_target_properties(server PROPERTIES
   AUTOMOC TRUE)

target_link_libraries(server
   KDSoap::kdsoap-server)
