project(gomoku)
cmake_minimum_required(VERSION 3.21)

set(GOMOKU pbrain-eplodor)
set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

set(
  GOMOKU_SRCS
  src/ai.cpp
  src/board.cpp
  src/boardgame.cpp
  src/gomoku.cpp
  src/pawn.cpp
  src/main.cpp
  )

add_executable(${GOMOKU} ${GOMOKU_SRCS})
