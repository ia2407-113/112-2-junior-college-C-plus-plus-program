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
    float kerosene; // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��) 
           
   public:         
    // create_flight_object:�إ߭��檫�����
    void create_flight_object( ) 
     {
       cout << "�إ߰�¦���Oflight_object�����\n"; 
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
    
    // ��ܭ��檫�����
    // display�������禡     
    virtual void display() 
     {
       cout << "\n�I�s��¦���Oflight_object��display()\n"; 
       cout << "���檫�W��:" << name << endl ;  
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
    // create_airliner:�إ߭��j���Ⱦ������ 
    void create_airliner() 
     {
       cout << "\n�إ߭l�����Oairliner�����\n"; 
       cout << "��@�@�[�j���Ⱦ�:\n";
       cout << "���ȤH��:" ; 
       cin >> passenger;
       cout << "�A�ȤH�����ƥ�:" ;
       cin >> service_person ;
       cout << "�s�y��:" ;
       cin >> manufacturer ;                   
     }  
    
    // ��ܤj���Ⱦ������
    // display�������禡
    virtual void display() 
     {
       cout << "\n�I�s�l�����Oairliner��display()\n"; 
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�A�ȤH�����ƥ�:" << service_person << endl ;     
       cout << "�s�y��:" << manufacturer << endl ;                
     }   
 } ;

int main()
 {
   flight_object *flight,flight1;        
   airliner air1;
  
   flight1.create_flight_object();
   flight=&flight1;  // flight���Vflight1����} 
   flight->display();
  
   air1.create_airliner();
   flight=&air1;  // flight���Vair1����} 
   flight->display();
    
  return 0;
 }
