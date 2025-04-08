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

void push_back(Node_list*& head, int value){

    Node_list* newElement = new Node_list;
    newElement->data=value;
    newElement->next=nullptr;


    if(head==nullptr){
        head=addFirstElement(value);
        return;
    }

    Node_list* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }

    temp->next=newElement;

}


void Insert(Node_list*& head, int value, int index){

    Node_list* newElement = new Node_list;
    newElement->data=value;
    newElement->next=nullptr;

    if(index==0){
        newElement->next=head;
        head=newElement;
        return;
    }

    Node_list* temp = head;
    int counter = 0;

    while (temp!=nullptr && counter<index-1)
    {
        temp=temp->next;
        counter++;
    }

    newElement->next=temp->next;
    temp->next=newElement;
    

}


void Print(Node_list* head){

    while (head!=nullptr)
    {
        cout<<"| "<<head->data<<" | --> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;

}

void Destroy(Node_list*& head){

    
    while(head!=nullptr){
        Node_list* temp = head;
        head=head->next;
        delete temp;
    }
}

int Size(Node_list*& head){

    int counter = 0;
    while (head!=nullptr)
    {
        head=head->next;
        counter++;
        
    }
    
    return counter;
}

int main(){

    Node_list* head = nullptr;
    head = addFirstElement(30);
    push_front(head,130);
    push_front(head,50);
    push_front(head,222);
    push_back(head,44);
    //Destroy(head);
    Insert(head,49,2);
    
    Print(head);
    cout<<"Size list: "<<Size(head)<<endl;

}