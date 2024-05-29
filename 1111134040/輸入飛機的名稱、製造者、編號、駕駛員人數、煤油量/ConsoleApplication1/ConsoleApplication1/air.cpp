#include <iostream>
#include <string>
#include "air.h" // 包含自定義的標頭檔案 "air.h"，其中定義了飛行物體類別的相關內容
using namespace std;

// 定義飛行物體類別的成員函式

// 飛行物體類別的建構子
flight_object::flight_object()
{
    cout << "實作一架飛行物:\n"; // 提示用戶正在創建一個飛行物體
    cout << "名稱:"; // 提示用戶輸入名稱
    cin >> name; // 讀取用戶輸入的名稱
    cout << "製造者:"; // 提示用戶輸入製造者
    cin >> manufacturer; // 讀取用戶輸入的製造者
    cout << "編號:"; // 提示用戶輸入編號
    cin >> id; // 讀取用戶輸入的編號
    cout << "駕駛員人數:"; // 提示用戶輸入駕駛員人數
    cin >> pilot; // 讀取用戶輸入的駕駛員人數
    cout << "煤油量(公升):"; // 提示用戶輸入煤油量
    cin >> kerosene; // 讀取用戶輸入的煤油量
}

// 飛行物體類別的解構子
flight_object::~flight_object()
{
    cout << "執行父類別flight_object的解構元函式.\n"; // 提示正在執行父類別的解構子
}

// 顯示飛行物體的資料
void flight_object::display()
{
    cout << "\n飛行物名稱:" << name << endl; // 顯示飛行物體的名稱
    cout << "製造者:" << manufacturer << endl; // 顯示飛行物體的製造者
    cout << "編號:" << id << endl; // 顯示飛行物體的編號
    cout << "駕駛員人數:" << pilot << endl; // 顯示飛行物體的駕駛員人數
    cout << "煤油量(公升):" << kerosene << endl; // 顯示飛行物體的煤油量
}

// 大型客機類別的建構子
airliner::airliner()
{
    cout << "乘客人數:"; // 提示用戶輸入乘客人數
    cin >> passenger; // 讀取用戶輸入的乘客人數
    cout << "服務人員的數目:"; // 提示用戶輸入服務人員數目
    cin >> service_person; // 讀取用戶輸入的服務人員數目
}

// 大型客機類別的解構子
airliner::~airliner()
{
    cout << "執行子類別airliner的解構元函式\n"; // 提示正在執行子類別的解構子
}

// 顯示大型客機的資料
void airliner::display()
{
    cout << "乘客人數:" << passenger << endl; // 顯示大型客機的乘客人數
    cout << "服務人員的數目:" << service_person << endl; // 顯示大型客機的服務人員數目
}

