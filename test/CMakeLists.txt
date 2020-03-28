add_subdirectory(googletest)

add_executable(parsedarg_test parsedarg_test.cpp)
target_link_libraries(parsedarg_test PRIVATE
    parsedarg
    gtest
    gtest_main
    pthread
)
