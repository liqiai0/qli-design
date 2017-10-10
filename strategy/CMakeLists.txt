project(strategy)

set(bin strategy)
set(strategy_src main.cpp ConcreteStrategy.cpp)

add_executable(${bin} ${strategy_src})



