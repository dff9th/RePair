#include "rputil.hpp"

#include <iostream>

#include "errutil.hpp"


void RpStruct::MakeFromFile(const std::string &fname, ErrorCode &err) {

#ifdef _DEBUG
    std::cout << "########################################" << std::endl;
    std::cout << "func: " << __func__ << std::endl;
    std::cout << "file: " << __FILE__ << std::endl;
    std::cout << "line: " << __LINE__ << std::endl;
    std::cout << "########################################" << std::endl;
#endif

    return;
}
