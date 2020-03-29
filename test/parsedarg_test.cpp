#include "gtest/gtest.h"

#include "parsedarg.hpp"
#include "err.hpp"

class ParsedArgTest : public ::testing::Test {
  protected:
    void FewArgs() {
        const int argc {2};
        const char* const argv[argc+1] {"a.out", "infile", 0};
        EXPECT_THROW(ParsedArg(argc, argv), Error);
    }

    void ManyArgs() {
        const int argc {4};
        const char* const argv[argc+1] {"a.out", "infile", "outfile", "extra", 0};
        EXPECT_THROW(ParsedArg(argc, argv), Error);
        try {
            ParsedArg(argc, argv);
        } catch (Error err) {
            Error expected_err {ErrorCode::ERROR_INVALID_ARG, std::string {"Usage: a.out <infile> <outfile>"}};
            EXPECT_EQ(expected_err, err);
        }
    }

    void ValidArgs() {
        const int argc {3};
        const char* const argv[argc+1] {"a.out", "infile", "outfile", 0};
        ParsedArg parg(argc, argv);
        EXPECT_EQ(parg._infile_name, std::string {"infile"});
        EXPECT_EQ(parg._outfile_name, std::string {"outfile"});
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
