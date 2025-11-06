cmake_minimum_required(VERSION 4.0)
project(MovieFix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.github)
include_directories(.idea)

add_executable(MovieFix
        .github/workflows/cmake-multi-platform.yml
        .idea/.gitignore
        .idea/material_theme_project_new.xml
        .idea/workspace.xml
        LICENSE
        main.cpp
        README.md)
