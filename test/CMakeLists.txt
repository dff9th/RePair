add_subdirectory(googletest)

add_executable(err_test err_test.cpp)
target_link_libraries(err_test PRIVATE
    err
    gtest
    gtest_main
    pthread
)

add_executable(parsedarg_test parsedarg_test.cpp)
target_link_libraries(parsedarg_test PRIVATE
    err
    parsedarg
    gtest
    gtest_main
    pthread
)
