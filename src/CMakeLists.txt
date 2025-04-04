list(APPEND SRC 
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cpu.cpp)

include(${CMAKE_CURRENT_LIST_DIR}/hardware/CMakeLists.txt)