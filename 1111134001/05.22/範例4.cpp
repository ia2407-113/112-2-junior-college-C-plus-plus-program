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
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];  
      
      int j;  
      cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }
             
    // �w�q�x�}���u*�v(����)�B��l���h��
    Matrix operator*(Matrix x)
     {        
      int i,j,k;
      Matrix temp(this->row,x.column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<x.column;j++)
          { 
           temp.element[i][j]=0 ; // �x�}�ۭ��᪺��i�C��j�椧���� 
		   // �C�C��column�Ӹ��(��column����)
           for (k=0;k<this->column;k++)  
             temp.element[i][j]+=this->element[i][k]*x.element[k][j] ;     
          }
      return temp ;
     }
 } ; 

int main()
 {  
  int i,j,row1,column1,row2,column2;
  cout << "���s�w�q�u*�v�����B��l�h���A�Ϩ�����Φb�x�}���k�W\n" ;
  cout << "��J�x�}A���C��(row):" ;
  cin >> row1 ;
  cout << "��J�x�}A�����(column):" ;
  cin >> column1 ;
  Matrix a('A',row1,column1) ;
  
  while (1)
   {
    cout << "��J�x�}B���C��(row):" ;
    cin >> row2 ;
    cout << "��J�x�}B�����(column):" ;
    cin >> column2 ;
    if (column1 != row2 )
       cout << "�x�}B���C�Ƥ�����x�}A����ơA�G�L�k�ۭ�.\n"  ;
    else
       break;
   }
    
  Matrix b('B',row2,column2) ;  
  Matrix c(row1,column2) ;
    
  c=a*b ;  // �x�}A*�x�}B
  
  cout << "A * B = \n" ;
  for (i=0;i<row1;i++)
   {    
     for (j=0;j<column2;j++)  
       cout << c.element[i][j]<< '\t' ;          
     cout << endl ;
   }

  return 0;
 }
