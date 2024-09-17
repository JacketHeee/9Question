/*
dự đoán kết quả của chương trình đảo thứ tự các từ, sử dụng strtok(char* str, char* str) {}
*/
//câu hỏi: kết quả của chương trình sau là gì? 
//kết quả: con bo biet bay - con bò biết bay 
#include <iostream>
#include <string.h>
using namespace std;
struct Word{
    char word[20] ;
};
void reverseWord(char* str) {
    Word wordArr[10];int n=0;
    char* token = strtok(str," ");
    while (token != NULL) {
        strcpy(wordArr[n++].word,token);
        token = strtok(NULL," ");
    }
    for (int i=n-1; i>=0; i--) 
        printf("%s ",wordArr[i].word);
}
int main() {
    char* str = new char[100];
    strcpy(str,"bay biet bo con");
    reverseWord(str);
    delete[] str;
    return 0;
}