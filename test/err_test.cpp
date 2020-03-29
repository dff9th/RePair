#include "gtest/gtest.h"

#include "err.hpp"
#include "parsedarg.hpp"

TEST(ExitTest, InvalidArg) {
    Error err {ErrorCode::ERROR_INVALID_ARG, "Usage a.out <infile> <outfile>"};
    //EXPECT_EXIT(err.exit(), ::testing::ExitedWithCode(1), "[ERROR] Usage: a.out <infile> <outfile>");
    EXPECT_EXIT(err.exit(), ::testing::ExitedWithCode(1), "\\[ERROR\\] Usage a\\.out <infile> <outfile>\n");
}
