#ifndef PARSEDARG_20200328
#define PARSEDARG_20200328

#include <string>
#include <sstream>
#include "err.hpp"

class ParsedArg {
  private:
    std::string _infile_name;
    std::string _outfile_name;

  public:
    friend class ParsedArgTest;
    ParsedArg (const int argc, const char* const *argv) {
        const int ARG_NUM {3};
        if (argc != ARG_NUM) {
            std::ostringstream msgstm {};
            msgstm << "Usage: " << argv[0] << " <infile> <outfile>";
            throw Error(ErrorCode::ERROR_INVALID_ARG, msgstm.str());
        }
        _infile_name = {argv[1]};
        _outfile_name = {argv[2]};
    }
};

#endif
