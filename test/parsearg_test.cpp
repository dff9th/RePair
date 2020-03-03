#include "gtest/gtest.h"

#include "parsearg.hpp"
#include "errutil.hpp"

namespace internal {
}

TEST(CaseParseArguments, ParseArguments) {
    EXPECT_EQ(ParseArguments([]), ErrorCode.ERROR_INVALID_ARG);
}

