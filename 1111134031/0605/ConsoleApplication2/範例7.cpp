#include <iostream>
#include <string>
using namespace std ;
// ���檫�����O,�O�@�ة�H���O 
class flight_object
 {   
   public:     
    string name;  // ���檫�W�� 
    int id;       // ���檫�s�� 
    int pilot;    // �r�p���H�� 
    float kerosene; //�Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��
    
    // �إ߭��檫�����
    // create_flight_object���µ����禡
    virtual void create_flight_object()=0; 
         
    // ��ܭ��檫�����
    // display���µ����禡     
    virtual void display()=0;           
 } ;

// �j���Ⱦ����O
class airliner:public flight_object
 {
   private:    
    int passenger;  // ���ȤH��   
    int service_person ;  // �A�ȤH�����ƥ� 
     
   public:        
    // �إߤj���Ⱦ����������    
    void create_airliner() 
     {     
       cout << "���ȤH��:" ; 
       cin >> passenger;
       cout << "�A�ȤH�����ƥ�:" ;
       cin >> service_person ;
       cout << "�s�y��:" ;
       cin >> manufacturer ;                   
     }
    
    // �إߤj���Ⱦ����������
    // �µ����禡create_flight_object����@���e 
    virtual void create_flight_object()
     {
       cout << "�إ߭l�����Oairliner���󪺸��\n"; 
       cout << "��@�@�[�j���Ⱦ�:\n" ;                 
       cout << "�W��:" ;
       cin >> name ;    
       cout << "�s��:" ; 
       cin >> id;
       cout << "�r�p���H��:" ;
       cin >> pilot ;        
       cout << "�Ѫo�q(����):" ;
       cin >> kerosene;         
     }  
    
    // ��ܤj���Ⱦ������
    // �µ����禡display����@���e 
    virtual void display() 
     {
       cout << "\n��ܭl�����Oairliner���󪺸��\n"; 
       cout << "�j���Ⱦ��W��:" << name << endl ;  
       cout << "�s��:" << id << endl ; 
       cout << "�r�p���H��:" << pilot << endl ;  
       cout << "�Ѫo�q(����):" << kerosene << endl ;                       
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�A�ȤH�����ƥ�:" << service_person << endl ;
       cout << "�s�y��:" << manufacturer << endl ;                
     }   
 } ;

// �԰������O 
class battleplane:public flight_object 
 {
   private:
     string weapon; 
      
   public:         
    // �إ߾԰������������ 
    void create_battleplane() 
     {     
       cout << "�Z���W��:" ; 
       cin >> weapon;     
       cout << "�s�y��:" ;
       cin >> manufacturer;                   
     } 
      
    // �إ߾԰������������
    // �µ����禡create_flight_object����@���e 
    virtual void create_flight_object()
     {
       cout << "\n�إ߭l�����Obattleplane���󪺸��\n"; 
       cout << "��@�@�[�԰���:\n" ;                 
       cout << "�W��:" ;
       cin >> name ;    
       cout << "�s��:" ; 
       cin >> id;
       cout << "�r�p���H��:" ;
       cin >> pilot ;        
       cout << "�Ѫo�q(����):" ;
       cin >> kerosene;         
     }    
   
    // ��ܾ԰��������
    // �µ����禡display����@���e     
    virtual void display() 
     {
       cout << "\n��ܭl�����Obattleplane���󪺸��\n"; 
       cout << "�԰����W��:" << name << endl ;  
       cout << "�s��:" << id << endl ; 
       cout << "�r�p���H��:" << pilot << endl ;  
       cout << "�Ѫo�q(����):" << kerosene << endl ;                       
       cout << "�Z���W��:" << weapon << endl ;      
       cout << "�s�y��:" << manufacturer << endl ;                
     }     
 } ;

int main()
 {
   flight_object *flight;        
   airliner air1;
   battleplane battle1; 
  
   flight=&air1;  // flight���Vair1����} 
   flight->create_flight_object(); 
   air1.create_airliner();
   flight->display();
   
   flight=&battle1;  // flight���Vbattle1����} 
   flight->create_flight_object();
   battle1.create_battleplane(); 
   flight->display();  
  
  return 0;
 }
