add_executable(test test.cpp)
if (BUILD_SHARED_LIBS)
    target_link_libraries(test INTERFACE
        )
else()
    target_link_libraries(test PRIVATE
        )
endif()

