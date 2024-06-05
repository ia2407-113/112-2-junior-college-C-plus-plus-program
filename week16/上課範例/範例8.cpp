#include <iostream>
#include <string>
using namespace std ;
// 飛行物體類別,是一種抽象類別 
class flight_object
 {   
   public:     
    string name;  // 飛行物名稱 
    int id;       // 飛行物編號 
    int pilot;    // 駕駛員人數 
    float kerosene;  // 煤油量(煤油是飛行物使用的燃料)           
    string manufacturer;  // 製造者
    
    // 建立飛行物的部分資料  
    void create_flight_object(string obj)
     {
       cout << "建立飛行物的資料\n"; 
       cout << "實作一架" << obj << endl ;                 
       cout << "名稱:" ;
       cin >> name ;    
       cout << "編號:" ; 
       cin >> id;
       cout << "駕駛員人數:" ;
       cin >> pilot ;        
       cout << "煤油量(公升):" ;
       cin >> kerosene;         
     }          
 } ;

// 大型客機類別
class airliner:public virtual flight_object
 {
   protected:    
    int passenger;  // 乘客人數   
    int service_person ;  // 服務人員的數目 
     
   public:        
    // 建立大型客機的部分資料    
    void create_airliner() 
     {     
       cout << "乘客人數:" ; 
       cin >> passenger;
       cout << "服務人員的數目:" ;
       cin >> service_person ;
       cout << "製造者:" ;
       cin >> manufacturer ;                   
     }
    
    // 顯示大型客機的資料   
    void display() 
     {
       cout << "\t顯示大型客機的資料\n"; 
       cout << "名稱:" << name << endl ;  
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;                       
       cout << "乘客人數:" << passenger << endl ;
       cout << "服務人員的數目:" << service_person << endl ;
       cout << "製造者:" << manufacturer << endl ;                
     }   
 } ;

// 戰鬥機類別 
class battleplane:public virtual flight_object 
 {
   protected:
     string weapon; 
      
  public:         
    // 建立戰鬥機的部分資料 
    void create_battleplane() 
     { 
       cout << "製造者:" ;
       cin >> manufacturer ;                     
     }  
      
    // 顯示戰鬥機的資料
    void display() 
     {
       cout << "\n顯示衍生類別battleplane物件的資料\n"; 
       cout << "戰鬥機名稱:" << name << endl ;  
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;                       
       cout << "武器名稱:" << weapon << endl ;      
       cout << "製造者:" << manufacturer << endl ;                
     }     
 } ;

// 轟炸機類別 
class bombplane:public airliner,public battleplane 
 {      
   public:         
    // 建立轟炸機的部分資料 
    void create_bombplane() 
     {     
       cout << "乘客人數:" ;
       cin >> passenger ;
       cout << "武器名稱:" ; 
       cin >> weapon;     
       cout << "製造者:" ;
       cin >> manufacturer;                   
     } 
   
    // 顯示轟炸機的資料
    void display() 
     {
       cout << "\n顯示轟炸機的資料\n"; 
       cout << "名稱:" << name << endl ;  
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;                       
       cout << "乘客人數:" << passenger << endl ;
       cout << "武器名稱:" << weapon << endl ;      
       cout << "製造者:" << manufacturer << endl ;                
     }     
 } ;

int main()
 {
   bombplane bomb1;
   bomb1.create_flight_object("轟炸機");
   bomb1.create_bombplane();  
   bomb1.display();
    
   return 0;
 }
