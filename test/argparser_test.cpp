#include "gtest/gtest.h"

#include "argparser.hpp"
#include "errutil.hpp"

using std::string;
using std::vector;

namespace internal {
}

TEST(CaseArgParser, ParseArguments) {
    vector<string> argv {};
    EXPECT_THROW(ParseArguments(argv), ErrorCode);
}
