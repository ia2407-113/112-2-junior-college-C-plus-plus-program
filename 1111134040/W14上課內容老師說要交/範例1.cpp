#include <iostream>
using namespace std ;
class Matrix
 {         
  public: 
    int row,column;
    int **element ; 
	
    Matrix(int m, int n)
     {
       row=m ;
       column=n ;
      
       // �t�mmxn���G���}�Celement���ʺA�O����
       element = new int *[m];
       int i, j;
       for (i=0 ; i<m ; i++)
          element[i] = new int [n];
     }   
	        
    // �w�q�x�}���u-�v(�t��)�e�m�B��l���h��
    Matrix operator-( )
     {        
       Matrix temp(row, column);
	   int i,j;      
       for (i=0 ; i<row ; i++)
         for (j=0 ; j<column ; j++)
            temp.element[i][j] = -(this->element[i][j]);        
	   return temp ;
     }
 } ;
 
int main()
 {
  int i, j, row, column;
  cout << "���s�w�q�u-�v�e�m�B��l���h���A�DA�x�}���Ưx�}(-A)�G\n" ;
  cout << "��J�x�}A���C��(row):" ;
  cin >> row ;
  cout << "��J�x�}A�����(column):" ;
  cin >> column ;
  Matrix a(row, column), b(row, column);
  cout << "��J�@" << row << 'x' << column << "�x�}A" << endl ; 
  for (i=0 ; i<row ; i++)       
    for (j=0 ; j<column ; j++)
      {
        cout << "A["<< i << "][" << j << "]=" ;
        cin >> a.element[i][j] ;
      }
  b = -a ; 
  cout << "�x�}A���t�x�}(-A):\n" ;
  for (i=0 ; i<row ; i++)
   {    
     for (j=0 ; j<column ; j++)  
        cout << b.element[i][j] << '\t' ;          
     cout << endl ;
   }
  
  return 0;
 }
