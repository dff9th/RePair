#include "gtest/gtest.h"

#include "parsedarg.hpp"
#include "errutil.hpp"

TEST(ParsedArg, FewArgs) {
    const int argc {2};
    const char* const argv[argc+1] {"a.out", "outfile", 0};
    EXPECT_THROW(ParsedArg(argc, argv), ErrorCode);
}

TEST(ParsedArg, ManyArgs) {
    const int argc {4};
    const char* const argv[argc+1] {"a.out", "outfile", "infile", "extra", 0};
    EXPECT_THROW(ParsedArg(argc, argv), ErrorCode);
}

TEST(ParsedArg, ValidArg) {
    const int argc {3};
    const char* const argv[argc+1] {"a.out", "outfile", "infile", 0};
    EXPECT_NO_THROW(ParsedArg(argc, argv));
}
