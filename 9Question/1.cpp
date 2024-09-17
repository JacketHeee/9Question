/*
dự đoán kết quả của 1 chương trình đệ quy tính tổng từ 1->n
*/
//câu hỏi: Kết quả của chương trình sau là gì?
//kết quả là: 15
#include <iostream>
using namespace std;
int sumToN(int n) {
    if (n==1) return 1;
    return n + sumToN(n-1);
}
int main() {
    cout << sumToN(5);
    return 0;
}