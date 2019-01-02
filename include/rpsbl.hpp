#ifndef RPSBL_HPP_201901030043
#define RPSBL_HPP_201901030043

#include <string>

#include "errutil.hpp"


// Array of three-word (pointer, symbol, pointer) triples
// [image: in case of text "AB...AB.."]
//      |----------------->|
//      |                  |
// | |A| |, | |B| |, ..., | |A| |, | |B| |, ...
//  |                      |
//  |<---------------------|
//
class RpSymbol {
public:
    RpSymbol() {}
    ~RpSymbol() {}
    void MakeFromFile(const std::string &fname, ErrorCode &err);
    void MakeFromString(const std::string &str, ErrorCode &err);
private:
    unsigned int ch_;       // character code in 4-byte
    unsigned int p_pos_;    // previous same bi-gram index
    unsigned int n_pos_;    // next same bi-gram index
};

#endif
