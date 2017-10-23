project(abstractFactory)

set(bin abstractFactory)
set(abstractFactory_src main.cpp Factory.cpp Product.cpp)

add_executable(${bin} ${abstractFactory_src})

