#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // �ŧi���A��ifstream����ƿ�J��y�����ܼ�readfile
    // ����Ū���ɮפ��� 
    ifstream readfile;// �Ĥ@�B:  �إ߿�J�ɪ����� 

    string filename;
    cout << "��J�n�}�Ҫ���r�ɦW��:";
    cin >> filename;

    // �H��Ū�Ҧ��}���ɮ� 
    readfile.open(filename, ios_base::in);  // �ĤG�B: �}��  
    if (readfile.fail())  // �ˬd�ɮׯ�_�}�� 
    {
        cout << filename << "�ɮ׵L�k�}��!\n";
        exit(1);  // exit(1)�禡�@�ά��j�������{��
    }
    cout << filename << "�ɮפw�}��!\n";

    // ����readfile��y
    readfile.close();
    if (readfile.fail())  // �ɮ׵L�k������  
    {
        cout << filename << "�ɮ׵L�k����!\n";
        exit(1);
    }
    cout << filename << "�ɮפw����!\n";

    return 0;
}