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


add_subdirectory(Component)      #组件协作设计模式
add_subdirectory(SRP)            #单一职责设计模式
add_subdirectory(ObjectCreator)  #对象创建模式

