#include "gtest/gtest.h"

#include "argparser.hpp"
#include "errutil.hpp"

TEST(ParseArguments, FewArgs) {
    const int argc {2};
    const char* const argv[argc+1] {"a.out", "outfile", 0};
    EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
}

TEST(ParseArguments, ManyArgs) {
    const int argc {4};
    const char* const argv[argc+1] {"a.out", "outfile", "infile", "extra", 0};
    EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
}

TEST(ParseArguments, ValidArg) {
    const int argc {3};
    const char* const argv[argc+1] {"a.out", "outfile", "infile", 0};
    EXPECT_NO_THROW(ParseArguments(argc, argv));
}
