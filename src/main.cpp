#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "err.hpp"
#include "parsedarg.hpp"
//#include "rputil.hpp"

int main(int argc, char **argv) {
    //RpStruct rp{};
    //std::string ifname{};
    //ErrorCode err{};

    //rp.MakeFromFile(ifname, err);
   
    try {
        ParsedArg parg(argc, argv);
    } catch (Error err) {
        err.exit();
    }

    return 0;
}
