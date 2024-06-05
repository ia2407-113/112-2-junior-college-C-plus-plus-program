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
    float kerosene; //煤油量(煤油是飛行物使用的燃料)           
    string manufacturer;  // 製造者
    
    // 建立飛行物的資料
    // create_flight_object為純虛擬函式
    virtual void create_flight_object()=0; 
         
    // 顯示飛行物的資料
    // display為純虛擬函式     
    virtual void display()=0;           
 } ;

// 大型客機類別
class airliner:public flight_object
 {
   private:    
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
    
    // 建立大型客機的部分資料
    // 純虛擬函式create_flight_object的實作內容 
    virtual void create_flight_object()
     {
       cout << "建立衍生類別airliner物件的資料\n"; 
       cout << "實作一架大型客機:\n" ;                 
       cout << "名稱:" ;
       cin >> name ;    
       cout << "編號:" ; 
       cin >> id;
       cout << "駕駛員人數:" ;
       cin >> pilot ;        
       cout << "煤油量(公升):" ;
       cin >> kerosene;         
     }  
    
    // 顯示大型客機的資料
    // 純虛擬函式display的實作內容 
    virtual void display() 
     {
       cout << "\n顯示衍生類別airliner物件的資料\n"; 
       cout << "大型客機名稱:" << name << endl ;  
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;                       
       cout << "乘客人數:" << passenger << endl ;
       cout << "服務人員的數目:" << service_person << endl ;
       cout << "製造者:" << manufacturer << endl ;                
     }   
 } ;

// 戰鬥機類別 
class battleplane:public flight_object 
 {
   private:
     string weapon; 
      
   public:         
    // 建立戰鬥機的部分資料 
    void create_battleplane() 
     {     
       cout << "武器名稱:" ; 
       cin >> weapon;     
       cout << "製造者:" ;
       cin >> manufacturer;                   
     } 
      
    // 建立戰鬥機的部分資料
    // 純虛擬函式create_flight_object的實作內容 
    virtual void create_flight_object()
     {
       cout << "\n建立衍生類別battleplane物件的資料\n"; 
       cout << "實作一架戰鬥機:\n" ;                 
       cout << "名稱:" ;
       cin >> name ;    
       cout << "編號:" ; 
       cin >> id;
       cout << "駕駛員人數:" ;
       cin >> pilot ;        
       cout << "煤油量(公升):" ;
       cin >> kerosene;         
     }    
   
    // 顯示戰鬥機的資料
    // 純虛擬函式display的實作內容     
    virtual void display() 
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

int main()
 {
   flight_object *flight;        
   airliner air1;
   battleplane battle1; 
  
   flight=&air1;  // flight指向air1的位址 
   flight->create_flight_object(); 
   air1.create_airliner();
   flight->display();
   
   flight=&battle1;  // flight指向battle1的位址 
   flight->create_flight_object();
   battle1.create_battleplane(); 
   flight->display();  
  
  return 0;
 }
