add_executable(repair main.cpp)
if (BUILD_SHARED_LIBS)
    add_library(argparser SHARED argparser.cpp)
    target_link_libraries(repair INTERFACE
        argparser
        )
else()
    add_library(argparser STATIC argparser.cpp)
    target_link_libraries(repair PRIVATE
        argparser
        )
endif()
