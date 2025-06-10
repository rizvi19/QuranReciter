cmake_minimum_required(VERSION 3.14)

project(QuranReciterAppSimple CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True) 

include_directories(include)

include(FetchContent) 
FetchContent_Declare( 
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG main #
)
FetchContent_MakeAvailable(googletest) 

add_executable(QuranReciterApp src/main.cpp)

add_executable(RunReciterTests tests/reciter_tests.cpp)

target_link_libraries(RunReciterTests PRIVATE gtest_main)

include(GoogleTest) 
gtest_discover_tests(RunReciterTests)

message(STATUS "Project files are in: ${PROJECT_SOURCE_DIR}")