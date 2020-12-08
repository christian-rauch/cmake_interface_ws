cmake_minimum_required(VERSION 3.5)
project(foobar_result_test)

include(GNUInstallDirs)

find_package(foobar_result REQUIRED)

add_executable(test src/test.cpp)
# NOTE: need to link against target 'result' intead of project 'foobar_result'
target_link_libraries(test result)

install(TARGETS test
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
