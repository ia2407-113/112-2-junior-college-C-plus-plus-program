#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
 {  
   // 宣告型態為ifstream的資料輸入串流物件變數readfile
   // 做為讀取檔案之用 
   ifstream readfile;  // 第一步:  建立輸入檔的物件
    
   // 以唯讀模式開啟test.txt檔案 
   readfile.open("test.txt",ios_base::in); // 第二步: 開檔 
   if (readfile.fail())
    {
      cout << "test.txt檔案無法開啟!\n" ;          
      exit(1) ;
    }  
  
   char ch;
   int filespace=0;  // 計算檔案所佔用的記憶體空間
   cout << "test.txt文字檔內容為:\n";
   while (1)                // 第三步: 讀取檔案內容 
    {
      ch=readfile.get();
     
      // readfile串流的檔案指標在檔尾時 
      if (readfile.eof())
         break;
      cout << ch ;    
      filespace ++;    
    }   
   cout << '\n' << "test.txt文字檔所佔的空間為";
   cout << filespace << "個位元組(包括換列字元)\n" ;
     
   // 清除readfile串流的狀態    
   readfile.clear();  
 
   readfile.close();  // 第四步: 關閉檔案 
   if (readfile.fail())
    {
      cout << "test.txt檔案無法關閉!\n" ;     
      exit(1) ;
    }
  
   return 0;
 }
