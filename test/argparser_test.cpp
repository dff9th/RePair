#include "gtest/gtest.h"

#include "argparser.hpp"
#include "errutil.hpp"

using std::string;
using std::vector;

namespace internal {
}

TEST(ParseArguments, InvalidArg) {
    // Invalide arguments
    {
        const int argc {1};
        const char* const argv[argc+1] {"a.out", 0};
        EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
    }
    {
        const int argc {2};
        const char* const argv[argc+1] {"a.out", "outfile", 0};
        EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
    }
    {
        const int argc {4};
        const char* const argv[argc+1] {"a.out", "outfile", "infile", "extra", 0};
        EXPECT_THROW(ParseArguments(argc, argv), ErrorCode);
    }

    // Valid arguments
    {
        const int argc {3};
        const char* const argv[argc+1] {"a.out", "outfile", "infile", 0};
        EXPECT_NO_THROW(ParseArguments(argc, argv));
    }
}
