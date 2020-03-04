#include "gtest/gtest.h"

#include "argparser.hpp"
#include "errutil.hpp"

using std::string;
using std::vector;

namespace internal {
}

TEST(CaseArgParser, ParseArguments) {
    const int argc {0};
    const char **argv {};
    EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
}
