// file_operations.cpp

#include <iostream>
#include <fstream>
#include <string>
#include "file_operations.h"

using namespace std;

void writeToFile() {
    ofstream appendfile("test.txt", ios_base::app);
    if (appendfile.fail()) {
        cout << "test.txt�ɮ׵L�k�}��!\n";
        exit(1);
    }

    string data;
    cout << "��J(�n�s�W��)��ơA�HEnter��@������:\n";
    getline(cin, data);
    appendfile << data << '\n';
    if (appendfile.fail()) {
        cout << "�g�J����\n";
        exit(1);
    }
    appendfile.close();
}

void readFromFile() {
    string filename;
    cout << "��J�n�}�Ҫ���r�ɦW��:";
    cin >> filename;

    ifstream readfile(filename, ios_base::in);
    if (readfile.fail()) {
        cout << filename << "�ɮ׵L�k�}��!\n";
        exit(1);
    }

    char ch;
    int filespace = 0;
    cout << filename << "�ɮפ��e��:\n";
    while (readfile.get(ch)) {
        cout << ch;
        filespace++;
    }
    cout << "\n" << filename << "�ɮשҦ����Ŷ��� " << filespace << " �Ӧ줸��(�]�A���C�r��)\n";
    readfile.close();
}
