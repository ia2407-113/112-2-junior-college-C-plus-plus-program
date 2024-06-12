// fileIO.cpp
#include "fileIO.h"

void writeFile(const string& filename) {
    ofstream writeFile;

    writeFile.open(filename, ios_base::app);
    if (writeFile.fail()) {
        cout << filename << "�ɮ׵L�k�}��!\n";
        exit(1);
    }

    string data;
    cout << "��J�n�s�W����ơA�HEnter��@������:\n";
    cin.ignore(); // �M���w�İ�
    getline(cin, data);
    writeFile << data << '\n';   // �g�J�ɮפ��e
    if (writeFile.fail()) {
        cout << "�g�J����\n";
        exit(1);
    }
    cout << "��Ƥw���\�s�W�� " << filename << " �ɮ�!\n";
    writeFile.close(); // �����g�J�ɮ�
}

void readFile(const string& filename) {
    ifstream readFile;

    readFile.open(filename, ios_base::in);
    if (readFile.fail()) {
        cout << filename << "�ɮ׵L�k�}��!\n";
        exit(1);
    }

    char ch;
    cout << filename << " �ɮפ��e��:\n";
    while (readFile.get(ch)) {
        cout << ch;
    }
    cout << endl;
    readFile.close(); // ����Ū���ɮ�
}
