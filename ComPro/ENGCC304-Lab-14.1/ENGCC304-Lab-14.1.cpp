#include <iostream>
using namespace std;

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

// ฟังก์ชันหาค่ามากที่สุด
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr[100]; // รองรับข้อมูลได้สูงสุด 100 ค่า
    int n = 0;

    cout << "Enter value:" << endl;

    // รับค่าจากผู้ใช้ในบรรทัดเดียว เช่น 50 10 20 30 ...
    while (cin >> arr[n]) {
        n++;
        if (cin.peek() == '\n') break;
    }

    cout << "Index: ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Min : " << findMin(arr, n) << endl;
    cout << "Max : " << findMax(arr, n) << endl;

    return 0;
}
