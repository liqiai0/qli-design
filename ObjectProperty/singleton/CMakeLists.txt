project(singleton)

set(bin singleton)
set(src main.cpp Singleton.cpp)

add_executable(${bin} ${src})

target_link_libraries(${bin} pthread m rt)

