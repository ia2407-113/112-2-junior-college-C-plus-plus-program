#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
int main()
 { 
  string name="mike"; //把σ7-1-3﹃
  int age=28;
  char blood='A';
  float height=168.567;
  double money=1234567000;

  cout.precision(4);  // 砞﹚疊翴计戈块俱计计 + 计计4
  cout << "1234567890123456789012345678901234567890"
       << "1234567890\n"
       << "и" << name
       << "\tさ" << age << "烦\n"
       << "﹀琌" << blood <<"\tō蔼"
       << setw(7) << height << "そだ\t" ;
       
  cout.setf(ios::scientific);  //  疊翴计厩癘腹よΑ   
  cout.precision(6);  //  砞﹚疊翴计戈计计6  
  cout << "蝗︽蹿" << money << "じ";

  return 0;
 }
