#include <iostream>
#include <string>
using namespace std ;
// 飛行物體類別 
class flight_object
 {         
   private:
    string name;  // 飛行物名稱 
    int id;       // 飛行物編號 
    int pilot;    // 駕駛員人數 
    float kerosene;  // 煤油量(煤油是飛行物使用的燃料) 
           
   public:     
    string manufacturer; //製造者     
    
    // flight_object類別建構元函式,設定飛行物的資料
    flight_object( ) 
     {
       cout << "實作一架飛行物:\n" ;                     
       cout << "名稱:" ;
       cin >> name ;
       cout << "製造者:" ;
       cin >> manufacturer ;    
       cout << "編號:" ; 
       cin >> id;
       cout << "駕駛員人數:" ;
       cin >> pilot ;        
       cout << "煤油量(公升):" ;
       cin >> kerosene;         
     } 
    
    // 顯示飛行物的資料
    void display() 
     {
       cout << "\n飛行物名稱:" << name << endl ;  
       cout << "製造者:" << manufacturer << endl;
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;         
     }         
 } ;
 
// 水上航行物體類別 
class ship_object
 {
   public:     
    string pump_jet ;  // 噴水推進器名稱 
    
    // ship_object類別建構元函式,設定飛行物的資料
    ship_object( ) 
     {                          
      cout << "噴水推進器名稱:" ;
      cin >> pump_jet ;          
     }            
 } ;

// 大型客機類別
class airliner:public flight_object,protected ship_object
 {
   private:
    int passenger;  //乘 客人數   
    int service_person ;  // 服務人員的數目 
     
   public:        
    // airliner類別建構元函式,設定大型客機的資料 
    airliner() 
     {
       cout << "乘客人數:" ; 
       cin >> passenger;
       cout << "服務人員的數目:" ;
       cin >> service_person ;                   
     }  
    
    // 顯示大型客機的資料
    void display() 
     {
       cout << "噴水推進器名稱:" << pump_jet << endl ;        
       cout << "乘客人數:" << passenger << endl ;
       cout << "服務人員的數目:" << service_person << endl ;           
	 }
	      
 } ;

int main()
 {
   airliner air1;  // 兼具空中及水上功能   
   air1.flight_object::display();  
   air1.display();
  
   return 0;
 }
