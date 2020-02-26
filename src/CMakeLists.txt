add_executable(repair main.cpp)
if (BUILD_SHARED_LIBS)
    target_link_libraries(repair INTERFACE
        )
else()
    target_link_libraries(repair PRIVATE
        )
endif()
