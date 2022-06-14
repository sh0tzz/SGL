cmake_minimum_required(VERSION 3.0)
project(SGL)

add_executable(
    ${PROJECT_NAME}
    main.cpp
    SGL/SGL_Funcs.cpp
    SGL/SGL_Parent/SGL_Parent.cpp
    SGL/SGL_Widget/SGL_Widget.cpp
    SGL/SGL_Label/SGL_Label.cpp
)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

INCLUDE(FindPkgConfig)

PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})

PKG_SEARCH_MODULE(lSDL2_ttf required SDL2_ttf)
INCLUDE_DIRECTORIES(${lSDL2_ttf_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${lSDL2_ttf_LIBRARIES})

# add_library(lSDL2_ttf)

