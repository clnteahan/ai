//
// Created by cjose on 3/22/2024.
//

#ifndef SMART_FMGR_H
#define SMART_FMGR_H

#endif //SMART_FMGR_H

#include <iostream>
#include <fstream>

using namespace std;
class FileManager {
public:
    FileManager() = default;

    static void writeToFile(const string &filename, const string &data) {
        ofstream file;
        file.open(filename);
        file << data;
        file.close();
    }

    static string readFromFile(const string &filename) {
        ifstream file;
        file.open(filename);
        string data;
        string line;
        while (getline(file, line)) {
            data += line;
        }
        file.close();
        return data;
    }

    static void appendToFile(const string &filename, const string &data) {
        ofstream file;
        file.open(filename, ios::app);
        file << data;
        file.close();
    }

    static void deleteFile(const string &filename) {
        remove(filename.c_str());
    }

    static void createDirectory(const string& directory) {
        const char* cmd = ((new string("mkdir "))->append(directory)).c_str();
        system(cmd);
    }

    static void deleteDirectory(const string& directory) {
        const char* cmd = ((new string("rmdir /s /q "))->append(directory)).c_str();
        system(cmd);
    }
};