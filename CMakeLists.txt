cmake_minimum_required(VERSION 3.0)

if(PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
MESSAGE(FATAL_ERROR "Do NOT support in-source build!!\n"
    "Please:\n"
    "    1. mkdir build;cd build\n"
    "    2. cmake ..\n"
    "    3. make\n")

endif()


set(CMAKE_C_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS "-Wall")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)


add_subdirectory(action)      #行为型设计模式


