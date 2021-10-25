# the whole CMakeLists.txt for project ttiger
PROJECT(vrp)

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

# include directories
INCLUDE_DIRECTORIES(
  ${PROJECT_SOURCE_DIR}/include

  /usr/local/include
  /usr/include
)

# lib directories
LINK_DIRECTORIES(
  ${PROJECT_BINARY_DIR}/lib

  /usr/local/lib
  /use/lib
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# subdirectory
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(tests)