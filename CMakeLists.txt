cmake_minimum_required(VERSION 2.0)

project(otpcode
   LANGUAGES C)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
set (CMAKE_C_FLAGS "-Wall -O3")

set(SOURCE otpcode.c)

add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS otpcode DESTINATION /usr/local/bin)
