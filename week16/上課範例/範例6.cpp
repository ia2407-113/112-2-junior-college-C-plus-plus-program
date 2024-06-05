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
    float kerosene; // 煤油量(煤油是飛行物使用的燃料) 
           
   public:         
    // create_flight_object:建立飛行物的資料
    void create_flight_object( ) 
     {
       cout << "建立基礎類別flight_object的資料\n"; 
       cout << "實作一架飛行物:\n" ;                 
       cout << "名稱:" ;
       cin >> name ;    
       cout << "編號:" ; 
       cin >> id;
       cout << "駕駛員人數:" ;
       cin >> pilot ;        
       cout << "煤油量(公升):" ;
       cin >> kerosene;         
     } 
    
    // 顯示飛行物的資料
    // display為虛擬函式     
    virtual void display() 
     {
       cout << "\n呼叫基礎類別flight_object的display()\n"; 
       cout << "飛行物名稱:" << name << endl ;  
       cout << "編號:" << id << endl ; 
       cout << "駕駛員人數:" << pilot << endl ;  
       cout << "煤油量(公升):" << kerosene << endl ;         
     }         
 } ;

// 大型客機類別
class airliner:public flight_object
 {
   private:
    int passenger;  // 乘客人數   
    int service_person ;  // 服務人員的數目 
    string manufacturer;  // 製造者
     
   public:        
    // create_airliner:建立飛大型客機的資料 
    void create_airliner() 
     {
       cout << "\n建立衍生類別airliner的資料\n"; 
       cout << "實作一架大型客機:\n";
       cout << "乘客人數:" ; 
       cin >> passenger;
       cout << "服務人員的數目:" ;
       cin >> service_person ;
       cout << "製造者:" ;
       cin >> manufacturer ;                   
     }  
    
    // 顯示大型客機的資料
    // display為虛擬函式
    virtual void display() 
     {
       cout << "\n呼叫衍生類別airliner的display()\n"; 
       cout << "乘客人數:" << passenger << endl ;
       cout << "服務人員的數目:" << service_person << endl ;     
       cout << "製造者:" << manufacturer << endl ;                
     }   
 } ;

int main()
 {
   flight_object *flight,flight1;        
   airliner air1;
  
   flight1.create_flight_object();
   flight=&flight1;  // flight指向flight1的位址 
   flight->display();
  
   air1.create_airliner();
   flight=&air1;  // flight指向air1的位址 
   flight->display();
    
  return 0;
 }
