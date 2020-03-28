#include "gtest/gtest.h"

#include "parsedarg.hpp"
#include "errutil.hpp"

class ParsedArgTest : public ::testing::Test {
  protected:
    void FewArgs() {
        const int argc {2};
        const char* const argv[argc+1] {"a.out", "infile", 0};
        EXPECT_THROW(ParsedArg(argc, argv), ErrorCode);
    }

    void ManyArgs() {
        const int argc {4};
        const char* const argv[argc+1] {"a.out", "infile", "outfile", "extra", 0};
        EXPECT_THROW(ParsedArg(argc, argv), ErrorCode);
    }

    void ValidArgs() {
        const int argc {3};
        const char* const argv[argc+1] {"a.out", "infile", "outfile", 0};
        ParsedArg parg(argc, argv);
        EXPECT_STREQ(parg._infile_name, "infile");
        EXPECT_STREQ(parg._outfile_name, "outfile");
    }
};

TEST_F(ParsedArgTest, FewArgs) {
    FewArgs();
}

TEST_F(ParsedArgTest, ManyArgs) {
    ManyArgs();
}

TEST_F(ParsedArgTest, ValidArgs) {
    ValidArgs();
}
