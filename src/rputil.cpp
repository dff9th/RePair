#include "rputil.hpp"
#include <iostream>

void echo() {
    std::cout << "echo" << std::endl;
}

void MakeTriWordFromFile(struct RpTriWord *twd, const std::string &ifname,
                         ErrorCode &err) {
    std::cout << "MakeTriWordFromFile is called" << std::endl;
    return;
}
