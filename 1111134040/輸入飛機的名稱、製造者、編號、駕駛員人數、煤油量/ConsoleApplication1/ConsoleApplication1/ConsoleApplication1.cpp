#include <iostream> // 引入輸入輸出的標頭檔案
#include <string> // 引入字串操作的標頭檔案
#include "air.h" // 引入自定義的標頭檔案 "air.h"

using namespace std; // 使用標準命名空間，這樣我們就可以直接使用標準庫中的功能，而不需要在前面加上 std::

int main() // 主函式的開始
{
    airliner air1;  // 創建一個名為 air1 的大型客機物件

    air1.flight_object::display(); // 呼叫大型客機類別中繼承的飛行物體類別的顯示函式，顯示飛行物體的資訊
    air1.display(); // 呼叫大型客機類別中的顯示函式，顯示大型客機的資訊

    return 0; // 回傳 0，表示程式執行成功並正常結束
}
