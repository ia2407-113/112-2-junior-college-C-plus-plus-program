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
      
      // �t�mmxn���G���}�Celement���ʺA�O����
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)        
         element[i] = new int [n];        
     }     
         
    // �w�q�x�}���u++�v(���W)��m�B��l���h��
    Matrix operator++(int)
     { 
	    Matrix temp(row,column); // �Ƥ���m++�B��l����e�����󤺮e 
        for (int i = 0; i < row; i++) 	    
          for (int j = 0; j < column; j++) 
		   {		  
             temp.element[i][j]  = this->element[i][j] ;
             this->element[i][j] = this->element[i][j]+1 ;
           }
        return temp; // �^�ǫ�m++�B��l����e�����󤺮e
     }   
 } ;
 
int main()
 {
   int i,j,row,column;
   cout << "���s�w�q�u++�v��m�B��l���h���A�Ϩ�����Φb�x�}���W�W\n" ;        
   cout << "��J�x�}a���C��(row):" ;
   cin >> row ;
   cout << "��J�x�}a�����(column):" ;
   cin >> column ;
   Matrix a(row, column), b(row, column);
   cout << "��J�@" << row << 'x' << column << "�x�}a" << endl ; 
   for (i=0 ; i<row ; i++)       
     for (j=0 ; j<column ; j++)
       {
         cout << "a["<< i << "][" << j << "]=" ;
         cin >> a.element[i][j] ;
       }
   cout << "����ub = a++ ;�v�����ǡA�O������ub = a ;�v�A" 
        << "�M�����ua++ ;�v\n" ;
   b=a++;  // ������b = a ;�A�M��A���� a++ ;  
   cout << "�x�}b�����e��:\n" ;
   for (i=0 ; i<row ; i++)
    {    
     for (j=0 ; j<column ; j++)  
      {
        cout << "b["<< i << "][" << j << "]=" ;
        cout << b.element[i][j] << "\t";
      }          
     cout << endl ;
    }
    
   cout << "a�����e��:\n" ;
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
