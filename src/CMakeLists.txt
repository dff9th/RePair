add_executable(repair main.cpp)
if (BUILD_SHARED_LIBS)
    add_library(parsedarg SHARED parsedarg.cpp)
    target_link_libraries(repair INTERFACE
        parsedarg
        )
else()
    add_library(parsedarg STATIC parsedarg.cpp)
    target_link_libraries(repair PRIVATE
        parsedarg
        )
endif()
