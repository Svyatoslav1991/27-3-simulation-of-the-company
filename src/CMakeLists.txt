cmake_minimum_required (VERSION 3.8)

project ("27-3-simulation-of-the-company")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(27-3-simulation-of-the-company main.cpp ${MY_INCLUDE_DIR}/functions.h ${MY_INCLUDE_DIR}/employee.h "employee.cpp" ${MY_INCLUDE_DIR}/worker.h "worker.cpp" ${MY_INCLUDE_DIR}/manager.h "manager.cpp" ${MY_INCLUDE_DIR}/boss.h "boss.cpp")

target_include_directories(27-3-simulation-of-the-company PUBLIC ${CMAKE_SOURCE_DIR}/include)