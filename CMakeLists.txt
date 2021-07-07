project(gomoku)
cmake_minimum_required(VERSION 3.21)

set(GOMOKU pbrain-eplodor)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

set(
  GOMOKU_SRCS
  src/main.cpp
  )

add_executable(${GOMOKU} ${GOMOKU_SRCS})
