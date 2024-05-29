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
    string manufacturer;  // 製造者     
    
    // flight_object類別建構元函式,設定飛行物的資料
    flight_object( ) 
     {
      cout << "實作一架飛行物:\n" ;
      manufacturer="波音公司";           
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
    void display() 
     {
      cout << "\n飛行物名稱:" << name << endl ;  
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
   // airliner類別建構元函式,設定大型客機的資料 
   airliner() 
     {
      cout << "乘客人數:" ; 
      cin >> passenger;
      cout << "服務人員的數目:" ;
      cin >> service_person ;
      cout << "製造者:" ;
      cin >> manufacturer ;                   
     }  
    
    // 顯示大型客機的資料
    void display_airliner() 
     {
      cout << "乘客人數:" << passenger << endl ;
      cout << "服務人員的數目:" << service_person << endl ;     
      cout << "子類別的製造者:" << manufacturer << endl ;     
     }   
 } ;

int main()
 {
  airliner air1;
  air1.display();
  air1.display_airliner();
  cout << "父類別的製造者:" 
       << air1.flight_object::manufacturer << endl ;

  return 0;
 }
