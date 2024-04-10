#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {  
  int num=1,i;         
  cout.fill('0') ;
  cout << setw(4) << num ; //以4Byte寬度顯示num
  cout.setf(ios::left) ; //資料靠左輸出 
  cout << setw(4) << num ;  

  return 0;
 }
