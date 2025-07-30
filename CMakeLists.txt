cmake_minimum_required(VERSION 3.28)
project(timkv)

set(CMAKE_CXX_STANDARD 17)

add_executable(timkv
    src/main.cpp
        src/cache.h
        src/slice.cpp
        src/slice.h
)

add_subdirectory(third_party/libhv)
target_link_libraries(timkv hv)




