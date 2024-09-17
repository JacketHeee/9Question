/*
dự đoán tác dụng 1 hàm chèn vào đầu của 1 link list, chèn vào đầu các dãy số, và in ra dãy số đó
mục đích giới thiệu link list
*/
//câu hỏi: Kết quả của chương trình sau là gì? 
//kết quả: 5 4 3 
#include <iostream>
using namespace std;
struct node {
    int data; 
    node* next;
};
node* newNode(int x) {
    node* tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void addHead(int x, node*& head) {
    node* tmp = newNode(x);
    if (head == NULL) {
        head = tmp;
        return;
    }
    tmp->next = head;
    head = tmp;
}
void destroyList(node*& head) {
    node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}
int main() {
    node* head = NULL;
    addHead(3,head);addHead(4,head);addHead(5,head);
    for (node* p = head; p!= NULL; p=p->next) 
        cout << p->data << " ";
    destroyList(head);
    return 0;
}