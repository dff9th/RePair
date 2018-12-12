#ifndef REPAIR_CLASS_H
#define REPAIR_CLASS_H

#include <vector>
#include <iostream>

using namespace std;

class RepairArray {
public:
    RepairArray(unsigned int size)
        : size_{size}, ch_(size), p_pos_(size), n_pos_(size) {
    }

    ~RepairArray() {}

private:
    unsigned int size_;
    vector<unsigned char> ch_;
    vector<unsigned int> p_pos_;
    vector<unsigned int> n_pos_;
};


#endif
