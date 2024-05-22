#include <iostream>
using namespace std ;
class Matrix
 {         
   public: 
    int row,column;
    int **element ;    
    Matrix(int m,int n)
     {
      row=m ;
      column=n ;
      
      // 配置mxn的二維陣列element之動態記憶體
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)        
         element[i] = new int [n];        
     }     
         
    // 定義矩陣的「++」(遞增)後置運算子的多載
    Matrix operator++(int)
     { 
	    Matrix temp(row,column); // 備分後置++運算子執行前的物件內容 
        for (int i = 0; i < row; i++) 	    
          for (int j = 0; j < column; j++) 
		   {		  
             temp.element[i][j]  = this->element[i][j] ;
             this->element[i][j] = this->element[i][j]+1 ;
           }
        return temp; // 回傳後置++運算子執行前的物件內容
     }   
 } ;
 
int main()
 {
   int i,j,row,column;
   cout << "重新定義「++」後置運算子的多載，使其能應用在矩陣遞增上\n" ;        
   cout << "輸入矩陣a的列數(row):" ;
   cin >> row ;
   cout << "輸入矩陣a的行數(column):" ;
   cin >> column ;
   Matrix a(row, column), b(row, column);
   cout << "輸入一" << row << 'x' << column << "矩陣a" << endl ; 
   for (i=0 ; i<row ; i++)       
     for (j=0 ; j<column ; j++)
       {
         cout << "a["<< i << "][" << j << "]=" ;
         cin >> a.element[i][j] ;
       }
   cout << "執行「b = a++ ;」的順序，是先執行「b = a ;」，" 
        << "然後執行「a++ ;」\n" ;
   b=a++;  // 先執行b = a ;，然後再執行 a++ ;  
   cout << "矩陣b的內容為:\n" ;
   for (i=0 ; i<row ; i++)
    {    
     for (j=0 ; j<column ; j++)  
      {
        cout << "b["<< i << "][" << j << "]=" ;
        cout << b.element[i][j] << "\t";
      }          
     cout << endl ;
    }
    
   cout << "a的內容為:\n" ;
   for (i=0 ; i<row ; i++)
    {    
      for (j=0 ; j<column ; j++)  
       {
         cout << "a["<< i << "][" << j << "]=" ;
         cout << a.element[i][j] << "\t";
       }            
      cout << endl ;
    }     
    
   return 0;
 }
