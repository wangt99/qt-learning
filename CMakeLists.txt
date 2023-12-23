cmake_minimum_required(VERSION 3.20)
## set compiler
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
message(WARNING "You're using ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIT ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(demo LANGUAGES CXX)

find_package(Qt6 COMPONENTS Widgets Core REQUIRED)
qt_standard_project_setup()

add_subdirectory(src/app)

