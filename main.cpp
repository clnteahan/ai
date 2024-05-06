#include <iostream>
#include "fmgr.hpp"
#include "Brain.hpp"
#include "Data.hpp"
#include "Tree/Tree.h"

using namespace std;

bool goodBad(string in) {
    const string good = "A+,A,A-";
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

    for (auto & i : data) {
        // 0, 1, 3, 5, 6, 9, 10, 14, 16
        i[0] = goodBad((string) i[0]);
        i[1] = goodBad((string) i[1]);
        i[3] = goodBad((string) i[3]);
        i[5] = goodBad((string) i[5]);
        i[6] = goodBad((string) i[6]);
        i[9] = goodBad((string) i[9]);
        i[10] = goodBad((string) i[10]);
        i[14] = goodBad((string) i[14]);
        i[16] = goodBad((string) i[16]);
    }

    for (auto & i : data) {
        for (const auto & j : i) {
            cout << ((string) j) << " ";
        }
        cout << endl;
    }
}

int main() { 
    cout << "Hello, World!" << endl << endl;
    Tree<int> tree;
    cout << "Root: " << tree.getRoot() << endl;
    /*try {
        load();
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }*/
    return 0;
}
