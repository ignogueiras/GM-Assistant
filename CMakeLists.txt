cmake_minimum_required(VERSION 3.28)

project(GMAssistant VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_subdirectory(modules)
add_subdirectory(tests)

add_executable(gm_assitant src/main.cpp)

target_link_libraries(gm_assitant PRIVATE story characters locations)

set_target_properties(gm_assitant PROPERTIES CXX_STANDARD 20)