cmake_minimum_required(VERSION 3.24)
project(Kanban C)

set(CMAKE_C_STANDARD 99)

add_executable(Kanban main.c kanban.h kanban.c)
