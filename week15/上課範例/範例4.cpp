#include <iostream>
#include <string>
using namespace std ;
// ���檫�����O 
class flight_object
 {         
   private:
     string name;  // ���檫�W�� 
     int id;       // ���檫���ɸ� 
     int pilot;    // �r�p���H�� 
     float kerosene;  // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 
           
   public:     
     string manufacturer;  // �s�y��     
    
     // flight_object���O�غc���禡,�]�w���檫�����
     flight_object( ) 
     {
       cout << "��@�@�[���檫:\n" ;                     
       cout << "�W��:" ;
       cin >> name ;
       cout << "�s�y��:" ;
       cin >> manufacturer ;    
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
       cout << "�s�y��:" << manufacturer << endl;
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
     int service_person;  // �A�ȤH�����ƥ� 
     
   public:        
     // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
     airliner() 
     {
       cout << "���ȤH��:" ; 
       cin >> passenger;
       cout << "�A�ȤH�����ƥ�:" ;
       cin >> service_person ;                   
     }  
    
     // ��ܤj���Ⱦ������
     void display() 
     {
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�A�ȤH�����ƥ�:" << service_person << endl ;           
	 }   
 } ;

// �Ť��ڤh�Ⱦ����O
class airbus:public airliner
 {
   private:       
     int bath_room ;   // �N�D�]�Ƽƥ�     
    
   public:       
     // airbus���O�غc���禡,�]�w�Ť��ڤh�Ⱦ������ 
     airbus() 
     {
       cout << "�N�D�Ǥ��ƥ�:" ; 
       cin >> bath_room ;                           
     }  
    
     // ��ܪŤ��ڤh�Ⱦ������
     void display() 
     {
       cout << "�N�D�Ǥ��ƥ�:" << bath_room << endl ;   
     }   
 } ;

int main()
 {
   airbus airbus1;   
   airbus1.flight_object::display();
   airbus1.airliner::display();
   airbus1.display();
  
  return 0;
 }
