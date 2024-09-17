/*
dự đoán kết quả của 1 chương trình đệ quy có nhớ, tìm số Fibbonacci thứ n
*/
//câu hỏi: Kết quả của chương trình sau là gì? 
//kết quả: 55
#include <iostream>
using namespace std;
int fibo[100] = {0,1};
int getFibonacciNumber(int n) {
    if (n != 0 && fibo[n] ==0) {
        fibo[n] = getFibonacciNumber(n-1) + getFibonacciNumber(n-2);
    }
    return fibo[n];
}
int main() {
    cout << getFibonacciNumber(10);
    return 0;
}