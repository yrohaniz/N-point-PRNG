cmake_minimum_required(VERSION 3.7)
project(N_point_PRNG)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c PRNG_uniform.c N-p_PRNG.h sample_mean_calc.c pseudo_point_generator.c)
add_executable(N_point_PRNG ${SOURCE_FILES})
