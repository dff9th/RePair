add_executable(test test.cpp)
target_link_libraries(test PRIVATE
    gtest
    gtest_main
    pthread
)

