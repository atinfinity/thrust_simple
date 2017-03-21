cmake_minimum_required(VERSION 2.8)
project(thrust_simple)

find_package(CUDA REQUIRED)
file(GLOB SOURCES "*.cpp" "*.c" "*.h" "*.hpp")

if(CUDA_FOUND)
	add_executable(thrust_simple ${SOURCES})
	include_directories(${CUDA_INCLUDE_DIRS})
	target_link_libraries(thrust_simple ${CUDA_LIBRARIES})
endif(CUDA_FOUND)
