//
// Created by cjose on 3/22/2024.
//

#ifndef SMART_FMGR_H
#define SMART_FMGR_H

#endif //SMART_FMGR_H

#include <iostream>
#include <fstream>
#include <vector>

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

    static int fileLines(const string &filename) {
        ifstream file;
        file.open(filename);
        string line;
        int i = 0;
        while (getline(file, line)) {
            i++;
        }
        file.close();
        return i;
    }

    static string readFile(const string &filename) {
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

    static vector<string> readLines(const string &filename) {
        ifstream file;
        file.open(filename);
        vector<string> data;
        string line;
        int i = 0;
        while (getline(file, line)) {
            data.push_back(line);
            i++;
        }
        file.close();
        return data;
    }

    static void appendFile(const string &filename, const string &data) {
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