#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
 {  
   // �ŧi���A��ifstream����ƿ�J��y�����ܼ�readfile
   // ����Ū���ɮפ��� 
   ifstream readfile;  // �Ĥ@�B:  �إ߿�J�ɪ�����
    
   // �H��Ū�Ҧ��}��test.txt�ɮ� 
   readfile.open("test.txt",ios_base::in); // �ĤG�B: �}�� 
   if (readfile.fail())
    {
      cout << "test.txt�ɮ׵L�k�}��!\n" ;          
      exit(1) ;
    }  
  
   char ch;
   int filespace=0;  // �p���ɮשҦ��Ϊ��O����Ŷ�
   cout << "test.txt��r�ɤ��e��:\n";
   while (1)                // �ĤT�B: Ū���ɮפ��e 
    {
      ch=readfile.get();
     
      // readfile��y���ɮ׫��Цb�ɧ��� 
      if (readfile.eof())
         break;
      cout << ch ;    
      filespace ++;    
    }   
   cout << '\n' << "test.txt��r�ɩҦ����Ŷ���";
   cout << filespace << "�Ӧ줸��(�]�A���C�r��)\n" ;
     
   // �M��readfile��y�����A    
   readfile.clear();  
 
   readfile.close();  // �ĥ|�B: �����ɮ� 
   if (readfile.fail())
    {
      cout << "test.txt�ɮ׵L�k����!\n" ;     
      exit(1) ;
    }
  
   return 0;
 }
