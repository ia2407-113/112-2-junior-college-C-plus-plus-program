#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {  
  int num=1,i;         
  cout.fill('0') ;
  cout << setw(4) << num ; //�H4Byte�e�����num
  cout.setf(ios::left) ; //��ƾa����X 
  cout << setw(4) << num ;  

  return 0;
 }
