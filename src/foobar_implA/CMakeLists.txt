cmake_minimum_required(VERSION 3.5)
project(foobar_implA)

include(GNUInstallDirs)

find_package(foobar_interface REQUIRED)

add_library(foobar_implA SHARED src/foobar_implA.cpp)
target_link_libraries(foobar_implA PUBLIC foobar_interface)

###########################################################
# TODO: Why do we have to repeat dependency 'result' here?
# find_package(foobar_result REQUIRED)
# target_link_libraries(foobar_implA PUBLIC result)
###########################################################

target_include_directories(foobar_implA PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>
)

install(EXPORT ${PROJECT_NAME}
    DESTINATION share/${PROJECT_NAME}/cmake
    FILE ${PROJECT_NAME}Config.cmake
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.hpp"
)

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME})