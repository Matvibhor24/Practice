#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
};
void traverse(node * ptr){
    while(ptr!=NULL){
        cout<<"ELEMENT : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){
    node * head;
    node * second;
    node * third;
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=19;
    third->next=NULL;

    traverse(head);
    return 0;
}