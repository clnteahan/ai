//
// Created by cjose on 4/23/2024.
//

#ifndef SMART_DATA_HPP
#define SMART_DATA_HPP


#include <string>

class Data {
private:
    int type;
    std::string sData;
    int iData;
    bool bData;
    void reset();
public:
    Data() {
        type= 0;
        reset();
    }

    Data& operator=(const std::string &data) {
        this->sData = data;
        this->type = 1;
        return *this;
    }

    Data& operator=(int data) {
        this->iData = data;
        this->type = 2;
        return *this;
    }

    Data& operator=(bool data) {
        this->bData = data;
        this->type = 3;
        return *this;
    }

    explicit operator std::string() const {
        if (type == 1) {
            return sData;
        } else if (type == 2) {
            return std::to_string(iData);
        } else {
            return bData ? "true" : "false";
        }
    }

};


#endif //SMART_DATA_HPP
