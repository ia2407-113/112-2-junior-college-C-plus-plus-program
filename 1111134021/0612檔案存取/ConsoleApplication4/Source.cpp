#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // �ŧi���A��ofstream����ƿ�X��y�����ܼ�appendfile
    // �����g�J�ɮפ���
    ofstream appendfile;  // �Ĥ@�B:  �إ߿�X�ɪ�����

    cout << "�}��test.txt��r�ɡA�÷s�W��Ʃ��ɧ�\n";

    // �H�g�J�Ҧ��}��test.txt�ɮ�,�ñN�s�W����Ƽg���ɮק���
    appendfile.open("test.txt", ios_base::app);    // �ĤG�B: �}��  app:�q�ɮ׵����~��W�[ 
    if (appendfile.fail())
    {
        cout << "test.txt�ɮ׵L�k�}��!\n";
        exit(1);
    }

    string data;
    cout << "��J(�n�s�W��)��ơA�HEnter��@������:\n";
    getline(cin, data);
    appendfile << data << '\n';   // �ĤT�B: �g�J�ɮפ��e
    if (appendfile.fail())  // �g�J���Ѯ� 
    {
        cout << "�g�J����\n";
        exit(1);
    }

    appendfile.close();     // �ĥ|�B: �����ɮ�  
    if (appendfile.fail())
    {
        cout << "test.txt�ɮ׵L�k����!\n";
        exit(1);
    }

    return 0;
}