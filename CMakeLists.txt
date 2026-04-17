cmake_minimum_required(VERSION 3.10)
project(PlaceToHorror VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)

set(SOURCES 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core/Engine.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core/Window.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core/Input.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/ecs/entities/Player.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/managers/EntityManager.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/managers/UIManager.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/managers/EventManager.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/ui/components/UIButton.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/ui/UIElement.cpp"
)

include_directories(
    "${CMAKE_CURRENT_SOURCE_DIR}/include/core"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/ecs/components"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/ecs/entities"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/entities"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/managers"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/ui"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/ui/components"
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE 
SDL2::SDL2 
SDL2::SDL2main
SDL2_image::SDL2_image
)
