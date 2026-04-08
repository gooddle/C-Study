cmake_minimum_required(VERSION 4.1)
project(c C)

set(CMAKE_C_STANDARD 23)

add_executable(my_study
        main.c
        01_Variable/var_study.c
        02_Operators/operators.c
)
