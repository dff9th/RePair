add_subdirectory(googletest)

add_executable(main_test main_test.cpp)
target_link_libraries(main_test PRIVATE
    gtest
    gtest_main
    pthread
)

add_executable(argparser_test argparser_test.cpp)
target_link_libraries(argparser_test PRIVATE
    argparser
    gtest
    gtest_main
    pthread
)
