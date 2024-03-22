#include <iostream>
#include "fmgr.h"

using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    FileManager::writeToFile(R"(C:\Programming\Projects\Save\test.txt)", "Hello, World!");
    return 0;
}
