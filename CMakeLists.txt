cmake_minimum_required(VERSION 3.19)
set(project_name oatpp_practice)
project(${project_name})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_OSX_ARCHITECTURES "arm64") # to make sure the executable is built for the same arch as the libs

# Project library sources
add_library(${project_name}-lib
        src/AppComponent.hpp
        src/dto/DTOs.hpp
        src/controller/MyController.hpp
        src/controller/MyController.cpp)

find_package(oatpp 1.2.5 REQUIRED)

# Link oatpp to the library
target_link_libraries(${project_name}-lib
        PUBLIC oatpp::oatpp
        PUBLIC oatpp::oatpp-test)

target_include_directories(${project_name}-lib PUBLIC src)

# Add main executable
add_executable(${project_name}  src/App.cpp)
target_link_libraries(${project_name} ${project_name}-lib)
add_dependencies(${project_name} ${project_name}-lib)

# Add test executable
add_executable(${project_name}-test test/Tests.cpp)
add_dependencies(${project_name}-test ${project_name}-lib)

enable_testing()
add_test(project-tests ${project_name}-test)