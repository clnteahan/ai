//
// Created by cjose on 4/23/2024.
//

#ifndef SMART_DATA_HPP
#define SMART_DATA_HPP


#include <string>

enum Types {
    STRING = 1,
    INTEGER = 2,
    BOOLEAN = 3
};

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
        reset();
        this->sData = data;
        this->type = 1;
        return *this;
    }

    Data& operator=(int data) {
        reset();
        this->iData = data;
        this->type = 2;
        return *this;
    }

    Data& operator=(bool data) {
        reset();
        this->bData = data;
        this->type = 3;
        return *this;
    }
    [[nodiscard]] Types getType() const {
        return static_cast<Types>(type);
    }

    [[nodiscard]] std::string getString() const {
        return sData;
    }

    [[nodiscard]] int getInt() const {
        return iData;
    }

    [[nodiscard]] bool getBool() const {
        return bData;
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
