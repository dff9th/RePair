#include <string>
#include <vector>

#include "errutil.hpp"

extern void ParseArguments(std::vector<std::string> argv) {
    if (argv.size() == 0) {
        throw ErrorCode::ERROR_INVALID_ARG;
    }
}
