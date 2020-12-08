cmake_minimum_required(VERSION 3.5)
project(foobar_interface)

include(GNUInstallDirs)

find_package(foobar_result REQUIRED)

add_library(foobar_interface INTERFACE)
target_link_libraries(foobar_interface INTERFACE result)

target_include_directories(${PROJECT_NAME} INTERFACE
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