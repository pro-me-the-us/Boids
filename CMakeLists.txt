cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(Boids)

add_executable(
		Boids
		src/main.cpp
		src/boid.cpp
		src/flock.cpp
)
