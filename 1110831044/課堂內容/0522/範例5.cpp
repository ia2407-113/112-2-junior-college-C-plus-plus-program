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
    string manufacturer; //�s�y��     
    
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
 
// ���W��檫�����O 
class ship_object
 {
   public:     
    string pump_jet ;  // �Q�����i���W�� 
    
    // ship_object���O�غc���禡,�]�w���檫�����
    ship_object( ) 
     {                          
      cout << "�Q�����i���W��:" ;
      cin >> pump_jet ;          
     }            
 } ;

// �j���Ⱦ����O
class airliner:public flight_object,protected ship_object
 {
   private:
    int passenger;  //�� �ȤH��   
    int service_person ;  // �A�ȤH�����ƥ� 
     
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
       cout << "�Q�����i���W��:" << pump_jet << endl ;        
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�A�ȤH�����ƥ�:" << service_person << endl ;           
	 }
	      
 } ;

int main()
 {
   airliner air1;  // �ݨ�Ť��Τ��W�\��   
   air1.flight_object::display();  
   air1.display();
  
   return 0;
 }
