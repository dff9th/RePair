#ifndef RPUTIL_HPP_201901020154
#define RPUTIL_HPP_201901020154

#include <vector>
#include <iostream>

enum class ErrorCode {
    SUCCESS,
    ERROR_FILE_OPEN
};

// Array of three-word
// [image]
//      |----------------->|
//      |                  |
// | |A| |, | |B| |, ..., | |A| |, | |B| |, ...
//  |                      |
//  |<---------------------|
//
struct RpTriWord {
    unsigned int ch_;
    unsigned int p_pos_;
    unsigned int n_pos_;
};

void MakeTriWordFromFile(struct RpTriWord *twd, const std::string &ifname,
                         ErrorCode &err);

void echo();

#endif
