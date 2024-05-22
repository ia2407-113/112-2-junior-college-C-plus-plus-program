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
      
      // 動態配置mxn的二維陣列element之記憶體
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
     }
    
    Matrix(char name,int m,int n)
     {
      row=m ;
      column=n ;
      
      // 動態配置mxn的二維陣列element之記憶體
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];  
      
      int j;  
      cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }
             
    // 定義矩陣的「*」(乘號)運算子的多載
    Matrix operator*(Matrix x)
     {        
      int i,j,k;
      Matrix temp(this->row,x.column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<x.column;j++)
          { 
           temp.element[i][j]=0 ; // 矩陣相乘後的第i列第j行之元素 
		   // 每列有column個資料(或column行資料)
           for (k=0;k<this->column;k++)  
             temp.element[i][j]+=this->element[i][k]*x.element[k][j] ;     
          }
      return temp ;
     }
 } ; 

int main()
 {  
  int i,j,row1,column1,row2,column2;
  cout << "重新定義「*」乘號運算子多載，使其能應用在矩陣乘法上\n" ;
  cout << "輸入矩陣A的列數(row):" ;
  cin >> row1 ;
  cout << "輸入矩陣A的行數(column):" ;
  cin >> column1 ;
  Matrix a('A',row1,column1) ;
  
  while (1)
   {
    cout << "輸入矩陣B的列數(row):" ;
    cin >> row2 ;
    cout << "輸入矩陣B的行數(column):" ;
    cin >> column2 ;
    if (column1 != row2 )
       cout << "矩陣B的列數不等於矩陣A的行數，故無法相乘.\n"  ;
    else
       break;
   }
    
  Matrix b('B',row2,column2) ;  
  Matrix c(row1,column2) ;
    
  c=a*b ;  // 矩陣A*矩陣B
  
  cout << "A * B = \n" ;
  for (i=0;i<row1;i++)
   {    
     for (j=0;j<column2;j++)  
       cout << c.element[i][j]<< '\t' ;          
     cout << endl ;
   }

  return 0;
 }
