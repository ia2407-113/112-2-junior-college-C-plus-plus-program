// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

using namespace std;

// 定義圖形基本類別
class shape {
protected:
    string name; // 圖形的名稱
    double shape_area; // 圖形的面積
public:
    shape() {} // 空的建構子
    shape(string n) : name(n) {} // 帶參數的建構子，用於設置圖形名稱
    virtual void area() = 0; // 純虛函式，需要在衍生類別中實作
    string getName() { return name; } // 公開成員函式，用於獲取圖形名稱
    double getArea() { return shape_area; } // 公開成員函式，用於獲取圖形面積
};

// 定義矩形衍生類別
class rectangle : public shape {
protected:
    double length; // 矩形的長度
    double width; // 矩形的寬度
public:
    rectangle() {} // 空的建構子
    rectangle(string n, double l, double w) : shape(n), length(l), width(w) {} // 帶參數的建構子，設置矩形名稱、長度和寬度
    void data_input() { // 輸入矩形的長和寬
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    void area() { // 計算矩形的面積
        shape_area = length * width;
    }
};

// 定義立方體衍生類別
class cube : public rectangle {
protected:
    double height; // 立方體的高度
public:
    cube() {} // 空的建構子
    cube(string n, double l, double w, double h) : rectangle(n, l, w), height(h) {} // 帶參數的建構子，設置立方體名稱、長度、寬度和高度
    void data_input() { // 輸入立方體的長、寬和高
        rectangle::data_input(); // 調用矩形類別中的輸入函式
        cout << "Enter height: ";
        cin >> height;
    }
    void area() { // 計算立方體的體積
        shape_area = length * width * height;
    }
};

int main() {
    rectangle rect("Rectangle", 0, 0); // 初始化矩形對象，名稱為 Rectangle，長和寬初始化為 0
    rect.data_input(); // 輸入矩形的長和寬
    rect.area(); // 計算矩形的面積
    cout << "Area of " << rect.getName() << ": " << rect.getArea() << endl; // 顯示矩形的面積

    cube c("Cube", 0, 0, 0); // 初始化立方體對象，名稱為 Cube，長、寬、高初始化為 0
    c.data_input(); // 輸入立方體的長、寬和高
    c.area(); // 計算立方體的體積
    cout << "Volume of " << c.getName() << ": " << c.getArea() << endl; // 顯示立方體的體積

    return 0;
}



// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
