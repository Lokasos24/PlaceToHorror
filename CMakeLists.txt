cmake_minimum_required(VERSION 3.10)
project(PlaceToHorror VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SDL2_DIR "B:/libs/SDL2-devel-2.30.11-VC/SDL2-2.30.11/cmake")

find_package(SDL2 REQUIRED)

set(SOURCES 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core/Engine.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core/Window.cpp"
)

include_directories(
    "${CMAKE_CURRENT_SOURCE_DIR}/include/core"
    ${SDL2_INCLUDE_DIRS}
    "B:/libs/SDL2-devel-2.30.11-VC/SDL2-2.30.11/include"
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2 SDL2::SDL2main)
