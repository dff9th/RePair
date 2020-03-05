#include "gtest/gtest.h"

#include "argparser.hpp"
#include "errutil.hpp"

using std::string;
using std::vector;

namespace internal {
}

TEST(ParseArguments, InvalidArg) {
    // Invalide argc
    {
        char **argv {};
        EXPECT_THROW(ParseArguments(0, argv), ErrorCode);
    }
}
