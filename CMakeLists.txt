cmake_minimum_required(VERSION 3.30)

project(GB_Emulator LANGUAGES CXX)

add_executable(gbemu src/main.cpp)

target_include_directories(gbemu PUBLIC include)