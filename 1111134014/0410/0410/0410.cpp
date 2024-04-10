#include <iostream>
using namespace std;

// 原型宣告
void bubble_sort(int* nums, int size);//泡沫排序
void swap(int nums[], int j);//交換

int main() {
    int nums[5]; // 宣告一個整數陣列，大小為5

    cout << "請輸入5個整數：\n"; // 提示使用者輸入5個整數

    // 使用者輸入數字
    for (int i = 0; i < 5; ++i) {
        cout << "輸入第 " << i + 1 << " 個整數：";
        cin >> nums[i];
    }

    bubble_sort(nums, 5); // 呼叫函式進行排序

    cout << "排序後的結果為："; // 輸出排序後的結果
    for (int i = 0; i < 5; ++i) {
        cout << nums[i] << " ";
    }

    return 0;
}

// 定義函式以進行整數陣列的排序
void bubble_sort(int* nums, int size) {
    // 使用冒泡排序法
    for (int i = 0; i < size - 1; ++i) { // 重複n-1次
        for (int j = 0; j < size - i - 1; ++j) { // 每次比較範圍減少1
            swap(nums, j); // 如果需要，交換數字
        }
    }
}

// 定義一個函數用於交換陣列中兩個元素的位置
void swap(int nums[], int j) {
    if (nums[j] > nums[j + 1]) { // 檢查索引為 j 的元素是否大於索引為 j+1 的元素
        int temp = nums[j]; // 如果是，則暫存索引為 j 的元素的值
        nums[j] = nums[j + 1]; // 將索引為 j+1 的元素的值賦值給索引為 j 的元素
        nums[j + 1] = temp; // 將暫存的值賦值給索引為 j+1 的元素，完成交換
    }
}

