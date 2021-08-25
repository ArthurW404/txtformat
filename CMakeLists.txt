cmake_minimum_required(VERSION 3.13)

project(txtformat VERSION 1.0
                  DESCRIPTION "Tool for formatting txt files"
                  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS Off)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)
            

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})


enable_testing()
include(CTest)


include_directories(include)
add_subdirectory(src)
add_subdirectory(test)