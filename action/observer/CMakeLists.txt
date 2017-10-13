project(observer)

set(bin observer)
set(observer_src main.cpp Weather.cpp)

add_executable(${bin} ${observer_src})

