add_executable(repair main.cpp)
if (BUILD_SHARED_LIBS)
    add_library(err SHARED err.cpp)
    add_library(parsedarg SHARED parsedarg.cpp)
    target_link_libraries(repair INTERFACE
        err
        parsedarg
        )
else()
    add_library(err STATIC err.cpp)
    add_library(parsedarg STATIC parsedarg.cpp)
    target_link_libraries(repair PRIVATE
        err
        parsedarg
        )
endif()
