cmake_minimum_required(VERSION 3.10)
project(FLTK_Tutorial)

find_package(FLTK REQUIRED)
include_directories(${FLTK_INCLUDE_DIR})

function(add_chapter name path)
    add_executable(${name} ${path})
    target_link_libraries(${name} ${FLTK_LIBRARIES})
endfunction()

add_chapter(chapter1 chapter-1/main.cpp)
add_chapter(chapter2 chapter-2/main.cpp)
add_chapter(chapter3 chapter-3/main.cpp)
add_chapter(chapter4 chapter-4/main.cpp)