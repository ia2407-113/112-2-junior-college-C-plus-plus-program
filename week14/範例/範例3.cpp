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
      int i, j ;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      
      cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }    
            
    // 定義矩陣的「+」(加號)運算子的多載
    Matrix operator+(Matrix x)
     {        
      int i,j;
      Matrix temp(this->row,this->column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<this->column;j++)           
           temp.element[i][j]= this->element[i][j] + x.element[i][j] ;      
    
      return temp ;
     }    
 } ;
 
int main()
 {
  int i,j,row,column;
  cout << "重新定義「+」(加號)運算子多載，使其能應用在矩陣加法上\n" ;
  cout << "輸入矩陣A及B的列數(row):" ;
  cin >> row ;
  cout << "輸入矩陣A及B的行數(column):" ;
  cin >> column ;
  Matrix a('A',row,column) ;
  Matrix b('B',row,column) ;
  Matrix c(row,column) ;
  
  c=a+b ;  // 矩陣A + 矩陣B
  
  cout << "矩陣A + 矩陣B = \n" ;  
  for (i=0;i<row;i++)
   {    
     for (j=0;j<column;j++)  
        cout << c.element[i][j]<< '\t' ;          
     cout << endl ;
   }
   
  return 0;
 }
