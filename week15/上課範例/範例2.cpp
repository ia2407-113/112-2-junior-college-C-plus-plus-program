#include <iostream>
#include <string>
using namespace std ;
// ���檫�����O 
class flight_object
 {         
  private:
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene;  // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 
           
  public:     
    string manufacturer;  // �s�y��     
    
    // flight_object���O�غc���禡,�]�w���檫�����
    flight_object( ) 
     {
      cout << "��@�@�[���檫:\n" ;
      manufacturer="�i�����q";           
      cout << "�W��:" ;
      cin >> name ;    
      cout << "�s��:" ; 
      cin >> id;
      cout << "�r�p���H��:" ;
      cin >> pilot ;        
      cout << "�Ѫo�q(����):" ;
      cin >> kerosene;         
     } 
    
    // ��ܭ��檫�����
    void display() 
     {
      cout << "\n���檫�W��:" << name << endl ;  
      cout << "�s��:" << id << endl ; 
      cout << "�r�p���H��:" << pilot << endl ;  
      cout << "�Ѫo�q(����):" << kerosene << endl ;         
     }         
 } ;

// �j���Ⱦ����O
class airliner:public flight_object
 {
  private:
    int passenger;  // ���ȤH��   
    int service_person ;  // �A�ȤH�����ƥ� 
    string manufacturer;  // �s�y��
     
  public:
   // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
   airliner() 
     {
      cout << "���ȤH��:" ; 
      cin >> passenger;
      cout << "�A�ȤH�����ƥ�:" ;
      cin >> service_person ;
      cout << "�s�y��:" ;
      cin >> manufacturer ;                   
     }  
    
    // ��ܤj���Ⱦ������
    void display_airliner() 
     {
      cout << "���ȤH��:" << passenger << endl ;
      cout << "�A�ȤH�����ƥ�:" << service_person << endl ;     
      cout << "�l���O���s�y��:" << manufacturer << endl ;     
     }   
 } ;

int main()
 {
  airliner air1;
  air1.display();
  air1.display_airliner();
  cout << "�����O���s�y��:" 
       << air1.flight_object::manufacturer << endl ;

  return 0;
 }
