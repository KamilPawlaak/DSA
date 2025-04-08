#include <iostream>
using namespace std;

struct Node_list{
    int data;
    Node_list* next;
};


Node_list* addFirstElement(int value){

    Node_list* newElement = new Node_list;
    newElement->data=value;
    newElement->next=nullptr;
    return newElement;
}

void push_front(Node_list*& head, int value){

    Node_list* newElemnet = new Node_list;

    if(head==nullptr){
        head=addFirstElement(value);
        return;
    }

    newElemnet->data=value;
    newElemnet->next=head;
    head=newElemnet;
}

void Print(Node_list* head){

    while (head!=nullptr)
    {
        cout<<"| "<<head->data<<" | --> ";
        head=head->next;
    }
    cout<<endl;

}

int main(){

    Node_list* head = nullptr;
    head = addFirstElement(30);
    push_front(head,130);
    push_front(head,50);
    push_front(head,222);
    Print(head);

}