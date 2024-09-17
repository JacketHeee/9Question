/*
dự đoán kết quả của 1 chương trình đệ qui chia để trị, là tìm kiếm nhị phân,
giá trị trả về: 
1. là vị trí trong mảng nếu tìm thấy
2. -1 nếu không tìm thấy
*/
//câu hỏi: Kết quả của chương trình sau là gì?
//kết quả: -1 3
#include <iostream>
using namespace std;
int binarySearch(int x, int a[], int left, int right) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;//tránh tràn số
    if (a[mid] == x) return mid;
    return (x > a[mid]) ? binarySearch(x,a,mid+1,right) : binarySearch(x,a,left,mid-1);
}
int main() {
    int a[100] = {2,3,5,10,19,20,15,10}; 
    cout << binarySearch(7,a,0,8-1) << " " << binarySearch(10,a,0,8-1);
    return 0;
}