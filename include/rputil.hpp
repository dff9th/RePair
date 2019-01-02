#ifndef RPUTIL_HPP_201901020154
#define RPUTIL_HPP_201901020154

#include <iostream>
#include <string>

#include "errutil.hpp"
#include "rphtbl.hpp"
#include "rppque.hpp"
#include "rpsbl.hpp"


// RePair data structures
// 1. Symbol Array
// 2. Priority queue of bi-gram count
// 3. Hash table of bi-gram to the symbol
class RpStruct {
public:
    // con/destructor
    RpStruct() : sblarr{}, pque{}, htbl{} {
    }
    ~RpStruct() {}

    // member function
    void MakeFromFile(const std::string &fname, ErrorCode &err);
    void MakeFromString(const std::string &str, ErrorCode &err);

private:
    RpSymbol *sblarr;       // Array of three-word triples
    RpPriQueue *pque;       // bi-gram count
    RpHashTbl *htbl;        // bi-gram to the symbol
};

#endif
