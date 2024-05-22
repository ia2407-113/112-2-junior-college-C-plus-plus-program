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
      
      // �ʺA�t�mmxn���G���}�Celement���O����
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
     }
    
    Matrix(char name,int m,int n)
     {
      row=m ;
      column=n ;
      
      // �ʺA�t�mmxn���G���}�Celement���O����
      element = new int *[m];
      int i, j ;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      
      cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }    
            
    // �w�q�x�}���u+�v(�[��)�B��l���h��
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
  cout << "���s�w�q�u+�v(�[��)�B��l�h���A�Ϩ�����Φb�x�}�[�k�W\n" ;
  cout << "��J�x�}A��B���C��(row):" ;
  cin >> row ;
  cout << "��J�x�}A��B�����(column):" ;
  cin >> column ;
  Matrix a('A',row,column) ;
  Matrix b('B',row,column) ;
  Matrix c(row,column) ;
  
  c=a+b ;  // �x�}A + �x�}B
  
  cout << "�x�}A + �x�}B = \n" ;  
  for (i=0;i<row;i++)
   {    
     for (j=0;j<column;j++)  
        cout << c.element[i][j]<< '\t' ;          
     cout << endl ;
   }
   
  return 0;
 }
