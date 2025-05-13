cmake_minimum_required(VERSION 3.10)
project(my_vector)

set(GOOGLETEST_VERSION 1.15.2)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O3")

enable_testing()

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(mytests 
    test/main.cpp
)

target_link_libraries(mytests PRIVATE gtest)

include(GoogleTest)

gtest_discover_tests(mytests)

# Add the executable
add_executable(my_vector
    main.cpp
    vector.cpp
)

# Include directories
target_include_directories(my_vector PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)