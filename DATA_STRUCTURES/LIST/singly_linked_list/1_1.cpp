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


int Size(Node_list* head){

    int counter = 0;
    while (head!=nullptr)
    {
        head=head->next;
        counter++;
        
    }
    
    return counter;
}

bool Read(Node_list* head, int i, int& co){

    if(head==nullptr){
        cout<<"Lista jest pusta"<<endl;
        return false;
    }

    Node_list* temp = head;
    int counter = 0;

    while (temp!=nullptr && counter<i){

        temp=temp->next;
        counter++;

    }


    if(temp!=nullptr){
        co=temp->data;
        return true;
    }
    else{
        cout<<"you went beyond the scope"<<endl;
        return false;
    }
}


bool Remove(Node_list*& head, int i, int& co){

    if(head==nullptr){
        return false;
    }

    int size = Size(head);
    if(i<0 || i>= size){
        return false;
    }

    Node_list* temp = head;
    int counter = 0;
    Node_list* prev = nullptr;
    
    while (temp!=nullptr && counter<i)
    {
        prev = temp;
        temp = temp->next;
        counter++;
    }
    
    if(i==0){
        co = temp->data;
        head = temp->next;
        delete temp;
        return true;
    }
    else{
        co = temp->data;
        prev->next=temp->next;
        delete temp;
    }

    return true;
}

Node_list* Search(Node_list* head, int x){

    while (head!=NULL)
    {
        if(head->data==x){
            return head;
        }

        head = head->next;
    }

    return NULL;
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

    int size = Size(head);

    if(index>=size){
        cout<<"you went beyond the scope"<<endl;
        delete newElement;
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



int main(){

    Node_list* head = nullptr;
    head = addFirstElement(30);
    push_front(head,130);
    push_front(head,50);
    push_front(head,222);
    push_back(head,44);
    //Destroy(head);
    Insert(head,49,2);
    
    
    cout<<"Size list: "<<Size(head)<<endl;

    int value;
    int index = 2;
    if(Read(head,index,value)){
        cout<<"Item in position "<<index<< " : "<<value<<endl;
    }


    int removeValue;
    if(Remove(head,index,removeValue)){

        cout<<"Deleted item with value "<<removeValue<<endl;
    }

    Node_list* result = Search(head,130);
    cout<<"Found: "<<result->data<<endl;

    Print(head);

    Destroy(head);

}