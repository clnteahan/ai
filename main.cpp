#include <iostream>
#include "fmgr.hpp"
#include "Brain.hpp"

using namespace std;

void load() {
    string data[183][24] = {};
    string *unproc = FileManager::readLines("C:/Programming/Projects/C++/Data/decision_tree.csv");
    //cout << unproc[0];
    for (int i = 0; i < 183; i++) {
        for (int j = 0; j < 24; j++) {
            data[i][j] = unproc[i].substr(0, unproc[i].find(','));
            unproc[i] = unproc->substr(unproc[i].find(',') + 1);
        }
    }
    for (int i = 0; i < 183; i++) {
        cout << unproc[i] << endl;
    }
}

int main() {
    cout << "Hello, World!" << endl;
    /*FileManager::writeToFile(R"(C:\Programming\Projects\Save\test.txt)", "Hello, World!");
    auto b1 = Brain(10);
    auto b2 = Brain(20);
    cout << "Brain 1 size: " << b1.getSize() << endl;*/
    try {
        load();
    } catch (exception &e) {
        cout << e.what() << endl;
    }
    return 0;
}
