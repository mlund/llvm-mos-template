cmake_minimum_required(VERSION 3.5)
set(LLVM_MOS_PLATFORM mega65)
find_package(llvm-mos-sdk REQUIRED)
project(myproject LANGUAGES C)

include(cmake/CPM.cmake)
CPMAddPackage("gh:mega65/mega65-libc#development")

add_compile_options(-Os -flto -Wall -Wextra -Wconversion)
add_subdirectory(src)
