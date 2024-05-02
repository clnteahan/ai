#include <iostream>
#include "fmgr.hpp"
#include "Brain.hpp"
#include "Data.hpp"

using namespace std;

bool goodBad(string in) {
    const string good = "A+,A,A-,B+,B,B-";
    if (good.contains(in)) {
        return true;
    } else {
        return false;
    }
}

void load() {
    Data data[100][24] = {};
    vector<string> unproc = FileManager::readLines("C:/Programming/Projects/C++/Data/decision_tree.csv");
    unproc.shrink_to_fit();

    for (auto it = unproc.begin(); it != unproc.end(); it++) {
        //cout << *it << endl;
    }
    //cout << unproc[0];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 24; j++) {
            data[i][j] = unproc.at(i + 1).substr(0, unproc[i + 1].find(','));
            unproc[i + 1] = unproc.at(i + 1).substr(unproc[i + 1].find(',') + 1);
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 24; j++) {
            cout << ((string) data[i][j]) << " ";
        }
        cout << endl;
    }
}

int main() { 
    cout << "Hello, World!" << endl << endl;
    /*FileManager::writeToFile(R"(C:\Programming\Projects\Save\test.txt)", "Hello, World!");
    auto b1 = Brain(10);
    auto b2 = Brain(20);
    cout << "Brain 1 size: " << b1.getSize() << endl;*/
    try {
        load();
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
