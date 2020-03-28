#include "errutil.hpp"

extern void ParseArguments(const int argc, const char* const *argv) {
    const int ARG_NUM {3};
    if (argc != ARG_NUM) {
        throw ErrorCode::ERROR_INVALID_ARG;
    }
}
