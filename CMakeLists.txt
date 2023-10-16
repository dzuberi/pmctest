#project(PMCTest)
#cmake_minimum_required(VERSION 3.0)

#add_executable(pmctest PMCTest.cpp)
add_compile_options(-g -O3 -Wall -muintr)
add_library(pmctest STATIC PMCTest.cpp)
