#ifndef REPAIR_CLASS_H
#define REPAIR_CLASS_H

class RepairArray {
public:
    RepairArray(unsigned int size) : size_{size} {
        ch_ = new unsigned char[size]{};
        p_pos_ = new unsigned int[size]{};
        n_pos_ = new unsigned int[size]{};
    }

    ~RepairArray(){
        delete ch_;
        delete p_pos_;
        delete n_pos_;
    }

private:
    unsigned int size_;
    unsigned char *ch_;
    unsigned int *p_pos_;
    unsigned int *n_pos_;
};

#endif
