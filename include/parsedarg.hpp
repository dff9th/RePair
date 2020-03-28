#ifndef PARSEDARG_20200328
#define PARSEDARG_20200328

#include "errutil.hpp"

class ParsedArg {
  private:
    const char* _infile_name;
    const char* _outfile_name;

  public:
    friend class ParsedArgTest;
    ParsedArg (const int argc, const char* const *argv) {
        const int ARG_NUM {3};
        if (argc != ARG_NUM) {
            throw ErrorCode::ERROR_INVALID_ARG;
        }
        _infile_name = {argv[1]};
        _outfile_name = {argv[2]};
    }
};

#endif
