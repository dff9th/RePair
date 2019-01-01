#include "rputil.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

int main() {
    struct RpTriWord *twd{};
    std::string ifname{};
    ErrorCode err{};

    MakeTriWordFromFile(twd, ifname, err);

    return 0;
}
