cmake_minimum_required(VERSION 3.10)
project(2-oji-uzd)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-O3")

# Add the executable
add_executable(2-oji-uzd
    main.cpp
    cl_students.cpp
    file_gen.cpp
    generator.cpp
    output_students.cpp
    read_students.cpp
    students_calc.cpp
    timer.cpp
    student.cpp
    inputs.cpp
)

# Include directories
target_include_directories(2-oji-uzd PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)