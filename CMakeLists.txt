# @file CMakeLists.txt
# 
# CMake files for Dictionary

cmake_minimum_required(VERSION 3.18)

# project info
project(dictionary)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Dictionary program
set(SOURCE Dictionary.cpp DictionaryWordProcessor.cpp WordProcessor.cpp)
add_executable(dictionary ${SOURCE})

# Demo run command
add_custom_target(run
        COMMENT "Run demo"
        COMMAND ./dictionary ${CMAKE_SOURCE_DIR}/Dictionary.cpp
        DEPENDS dictionary
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
