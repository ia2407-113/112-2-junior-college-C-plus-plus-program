#include <iostream>
#include <string>
using namespace std ;
// ���檫�����O 
class flight_object
 {         
   private:
     string name; // ���檫�W�� 
     int id;      // ���檫�s�� 
     int pilot;   // �r�p���H�� 
     float kerosene; // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 
           
   public:          
     // flight_object���O�غc���禡,�]�w���檫�����          
     flight_object( ) 
      {
        cout << "��������Oflight_object���غc���禡\n" ;
        cout << "��@�@�[���檫:\n" ;          
        cout << "�W��:" ;
        cin >> name ;    
        cout << "�s��:" ; 
        cin >> id;
        cout << "�r�p���H��:" ;
        cin >> pilot ;        
        cout << "�Ѫo�q(����):" ;
        cin >> kerosene;         
      }  
   	
     // flight_object���O�Ѻc���禡
     ~flight_object()
      { 
        cout << "��������Oflight_object���Ѻc���禡.\n" ;      
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
 
   public:  
     // airliner���O�غc���禡,�]�w�j���Ⱦ������  
     airliner() 
      {
        cout << "\n����l���Oairliner���غc���禡\n" ;
        cout << "���ȤH��:" ; 
        cin >> passenger;
        cout << "�A�ȤH�����ƥ�:" ;
        cin >> service_person ;                   
      } 
      
     // airliner���O�Ѻc���禡
     ~airliner()
      { 
        cout << "����l���Oairliner���Ѻc���禡.\n" ;
      }
      
     // ��ܤj���Ⱦ������
     void display_airliner() 
      {
        cout << "���ȤH��:" << passenger << endl ;
        cout << "�A�ȤH�����ƥ�:" << service_person << endl ;     
      }   
 } ;

int main()
 {
   airliner air1;  
   air1.display();
   air1.display_airliner();
    
   return 0;
 }
