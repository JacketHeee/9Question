/*
Dự đoán tác dụng của một hàm,
mục đích để giới thiệu con trỏ
*/
//câu hỏi: hàm này có tác dụng gì? cách sử dụng nó như thế nào?
/*
trả lời: 
- tác dụng: nhập 1 mảng bằng con trỏ với số lượng ban đầu cho trước và trả về địa chỉ của mảng đó
- các sử dụng: khai báo 1 con trỏ mảng và cho nó hứng/nhận/lấy giá trị từ hàm,
//giá trị của tên mảng: là địa chỉ ô nhớ đầu tiên của mảng đó.
*/
#include <iostream>
using namespace std;
//lúc hỏi chỉ show hàm inputArray thôi: 
int* inputArray(int n) {
    int *arr = new int[n];//cấp phát động trên bộ nhớ Heap
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    return arr;
}

//phần main trả lời cho câu hỏi: sử dụng như thế nào? 
int main() {
    int n = 5;
    int* arr = inputArray(n);
    delete[] arr;//giải phóng bộ nhớ 
    return 0;
}
