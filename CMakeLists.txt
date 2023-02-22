cmake_minimum_required(VERSION 3.23)

project(poco-jwt-test
  VERSION 0.0.1
  DESCRIPTION "Trying to use Poco JWT features from vcpkg"
  LANGUAGES CXX)

include(CMakePackageConfigHelpers)

find_package(Poco REQUIRED COMPONENTS jwt)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Poco::JWT)
