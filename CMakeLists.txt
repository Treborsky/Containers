cmake_minimum_required(VERSION 3.11)

project(Containers VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# BUILD LIBRARIES AND MAIN EXECUTABLE

add_executable(main main.cc)

# FETCH GOOGLETEST

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

IF(WIN32)
	set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
ENDIF()

FetchContent_MakeAvailable(googletest)

# TESTING

enable_testing()

add_executable(
	${PROJECT_NAME}_test
	test/test.cc
)

target_link_libraries(
	${PROJECT_NAME}_test
	gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

