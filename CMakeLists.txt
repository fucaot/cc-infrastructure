cmake_minimum_required(VERSION 3.10)

SET(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
# SET(CMAKE_TOOLCHAIN_FILE "/Users/wangjiawei/Dev/env/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(Infrastructure LANGUAGES CXX)

add_subdirectory(core)
add_subdirectory(engine)
add_subdirectory(cm)
