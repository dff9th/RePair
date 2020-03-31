add_subdirectory(googletest)

include_directories(AFTER
    ${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include
    ${CMAKE_CURRENT_SOURCE_DIR}/googletest/googlemock/include
    )

add_executable(all_test
    err_test
    parsedarg_test
    )
if (BUILD_SHARED_LIBS)
    add_library(err_test SHARED err_test.cpp)
    add_library(parsedarg_test SHARED parsedarg_test.cpp)
    target_link_libraries(all_test INTERFACE
        err
        parsedarg
        gtest
        gtest_main
        pthread
        )
else()
    add_library(err_test STATIC err_test.cpp)
    add_library(parsedarg_test STATIC parsedarg_test.cpp)
    target_link_libraries(all_test PRIVATE
        err
        parsedarg
        gtest
        gtest_main
        pthread
        )
endif()


