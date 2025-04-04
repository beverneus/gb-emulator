cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 23)

project(GB_Emulator LANGUAGES CXX)

include(src/CMakeLists.txt)

add_executable(gbemu ${SRC})

target_include_directories(gbemu PUBLIC include)