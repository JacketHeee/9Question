/*
dự đoán kết quả của một chương trình giải mã của một chuỗi ký tự đã được mã hóa.
*/
//câu hỏi: dự đoán kết quả của chương trình sau? gợi ý sử dụng bãng mã ASCCI.
//kết quả: bay biet bo con
#include <iostream>
#include <string.h>
using namespace std;
void decode(char* str) {
    for (int i=0; i<strlen(str); i++)
        str[i] = (char)(str[i]-1);
}
int main() {
    char *str = new char[100];
    strcpy(str,"cbz!cjfu!cp!dpo");
    decode(str);
    printf("%s\n",str);
    return 0;
}