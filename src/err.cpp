#include "err.hpp"

#include <iostream>
#include <cstdlib>

void Error::exit() const {
    std::cerr << "[ERROR] " << this->_msg << std::endl;
    std::exit(1);
}
