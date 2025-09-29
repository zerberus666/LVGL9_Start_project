cmake_minimum_required(VERSION 3.15)
project(lvgl_sdl_demo C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(lvgl)

set(SDL2_INCLUDE_DIR C:/msys64/mingw64/include/SDL2)
set(SDL2_LIBRARY C:/msys64/mingw64/lib/libSDL2.dll.a)


include_directories(
    ${SDL2_INCLUDE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/lvgl
    ${CMAKE_CURRENT_SOURCE_DIR}/lvgl/src/drivers/sdl
    ${CMAKE_CURRENT_SOURCE_DIR}
    C:/msys64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include
    C:/msys64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include-fixed
)

add_executable(main main.c)
target_link_libraries(main lvgl ${SDL2_LIBRARY})
