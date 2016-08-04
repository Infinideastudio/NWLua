cmake_minimum_required(VERSION 2.6)

project(nwlua)

include_directories("/home/miigon/repo/NEWorld")
aux_source_directory(./src SRC)
add_library(nwlua SHARED ${SRC})
add_executable(nwluae ${SRC})