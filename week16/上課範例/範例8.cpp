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
    float kerosene;  // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)           
    string manufacturer;  // �s�y��
    
    // �إ߭��檫���������  
    void create_flight_object(string obj)
     {
       cout << "�إ߭��檫�����\n"; 
       cout << "��@�@�[" << obj << endl ;                 
       cout << "�W��:" ;
       cin >> name ;    
       cout << "�s��:" ; 
       cin >> id;
       cout << "�r�p���H��:" ;
       cin >> pilot ;        
       cout << "�Ѫo�q(����):" ;
       cin >> kerosene;         
     }          
 } ;

// �j���Ⱦ����O
class airliner:public virtual flight_object
 {
   protected:    
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
    
    // ��ܤj���Ⱦ������   
    void display() 
     {
       cout << "\t��ܤj���Ⱦ������\n"; 
       cout << "�W��:" << name << endl ;  
       cout << "�s��:" << id << endl ; 
       cout << "�r�p���H��:" << pilot << endl ;  
       cout << "�Ѫo�q(����):" << kerosene << endl ;                       
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�A�ȤH�����ƥ�:" << service_person << endl ;
       cout << "�s�y��:" << manufacturer << endl ;                
     }   
 } ;

// �԰������O 
class battleplane:public virtual flight_object 
 {
   protected:
     string weapon; 
      
  public:         
    // �إ߾԰������������ 
    void create_battleplane() 
     { 
       cout << "�s�y��:" ;
       cin >> manufacturer ;                     
     }  
      
    // ��ܾ԰��������
    void display() 
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

// �F�������O 
class bombplane:public airliner,public battleplane 
 {      
   public:         
    // �إ��F������������� 
    void create_bombplane() 
     {     
       cout << "���ȤH��:" ;
       cin >> passenger ;
       cout << "�Z���W��:" ; 
       cin >> weapon;     
       cout << "�s�y��:" ;
       cin >> manufacturer;                   
     } 
   
    // ����F���������
    void display() 
     {
       cout << "\n����F���������\n"; 
       cout << "�W��:" << name << endl ;  
       cout << "�s��:" << id << endl ; 
       cout << "�r�p���H��:" << pilot << endl ;  
       cout << "�Ѫo�q(����):" << kerosene << endl ;                       
       cout << "���ȤH��:" << passenger << endl ;
       cout << "�Z���W��:" << weapon << endl ;      
       cout << "�s�y��:" << manufacturer << endl ;                
     }     
 } ;

int main()
 {
   bombplane bomb1;
   bomb1.create_flight_object("�F����");
   bomb1.create_bombplane();  
   bomb1.display();
    
   return 0;
 }
