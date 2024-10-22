# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(PhysicsEngine VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the directories for include, src, and pipeline
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(PIPELINE_DIR ${PROJECT_SOURCE_DIR}/pipelines)

# Include directories for headers
include_directories(${INCLUDE_DIR} ${SDL2_INCLUDE_DIRS})

# Find SDL2 package
find_package(SDL2 REQUIRED)

# Specify the source files
file(GLOB SOURCES "${SRC_DIR}/*.cpp" "${PIPELINE_DIR}/*.cpp")

# Create an executable for the project
add_executable(physics_engine ${SOURCES})

# Link SDL2 library to the executable
target_link_libraries(physics_engine ${SDL2_LIBRARIES})
