#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
int main()
 { 
  string name="mike"; //�Ѧ�7-1-3�r��
  int age=28;
  char blood='A';
  float height=168.567;
  double money=1234567000;

  cout.precision(4);  // �]�w�B�I�Ƹ�ƿ�X�ɡA��Ʀ�� + �p�Ʀ�ơA�@4��
  cout << "1234567890123456789012345678901234567890"
       << "1234567890\n"
       << "�ڪ��W�r�s" << name
       << "\t���~" << age << "��\n"
       << "�嫬�O" << blood <<"\t����"
       << setw(7) << height << "����\t" ;
       
  cout.setf(ios::scientific);  //  �B�I�ƥH��ǰO�����覡   
  cout.precision(6);  //  �]�w�B�I�Ƹ�ƪ��p�Ʀ��6��  
  cout << "�Ȧ�s��" << money << "��";

  return 0;
 }
