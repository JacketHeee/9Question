/*
dự đoán kết quả của 1 chương trình đệ quy có nhớ, tìm số Fibbonacci thứ n
*/
//câu hỏi: Kết quả của chương trình sau là gì?
//kêt quả: các chuỗi nhị phân có độ dài là 3.
#include <iostream>
using namespace std;
void generateBinaryStringsUtil(int n, char* str, int index) {
    if (index == n) {
        str[index] = '\0';
        printf("%s\n",str);
        return;
    }
    for (int i=0;i<2; i++) {
        str[index] = (char)('0' + i);
        generateBinaryStringsUtil(n,str,index+1);
    }
    
} 
void generateBinaryStrings(int n) {
    char* str = new char[n+1];
    generateBinaryStringsUtil(n,str,0);
    delete[] str;
}
int main() {
    generateBinaryStrings(3);
    return 0;
}