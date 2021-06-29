cmake_minimum_required(VERSION 3.20)

project(credit VERSION 1.0)

include_directories("inc")

configure_file("${PROJECT_SOURCE_DIR}/src/config.h.in" "${PROJECT_BINARY_DIR}/config.h")
include_directories("${PROJECT_BINARY_DIR}")

add_executable(credit src/main.cc)

target_include_directories(credit PUBLIC "${PROJECT_BINARY_DIR}")