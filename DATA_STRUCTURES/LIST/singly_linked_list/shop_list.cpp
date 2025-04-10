#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct ShopList{
    string name;
    int price;
    int quantity;
    ShopList* next;
};


ShopList* addFirstElement(string name, int price, int quantity){
    ShopList* newElement = new ShopList;
    newElement->name=name;
    newElement->price=price;
    newElement->quantity=quantity;
    newElement->next=nullptr;
    return newElement;
}

void push_front(ShopList* head, string name, int price, int quantity){

    ShopList* newElement = new ShopList;

    if(head==nullptr){
        head=addFirstElement(name, price, quantity);
        return;
    }

    newElement->name=name;
    newElement->price=price;
    newElement->quantity=quantity;
    newElement->next=head;
    head=newElement;
}

void push_back(ShopList* head, string name, int price, int quantity){

    ShopList* newElement = new ShopList;
    newElement->name=name;
    newElement->price=price;
    newElement->quantity=quantity;
    newElement->next=nullptr;

    if(head==nullptr){
        head=addFirstElement(name, price, quantity);
        return;
    }
    ShopList* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newElement;
}

int Size(ShopList* head){

    int counter = 0;
    while (head!=nullptr)
    {
        head=head->next;
        counter++;
    }
    return counter;
}

void Print(ShopList* head){

    int counter = 0;
    cout<<"List: "<<endl;
    cout<<"------------------"<<endl;
    cout<<"LP | Name | Price | Quantity |"<<endl;
    cout<<"------------------"<<endl;
    while (head!=nullptr)
    {
        counter++;
        cout<<counter<<". "<<head->name<<" "<<head->price<<"zl "<<head->quantity<<endl;
        head=head->next;

    }
    cout<<"NULL"<<endl;

}

void Destroy(ShopList*& head){

    while(head!=nullptr){
        ShopList* temp = head;
        head=head->next;
        delete temp;
    }
}

void Insert(ShopList*& head, string name, int price, int quantity, int index){

    ShopList* newElement = new ShopList;
    newElement->name=name;
    newElement->price=price;
    newElement->quantity=quantity;
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

    ShopList* temp = head;
    int counter = 0;

    while (temp!=nullptr && counter<index-1)
    {
        temp=temp->next;
        counter++;
    }

    newElement->next=temp->next;
    temp->next=newElement;

}
void Delete(ShopList*& head, int index){

    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }

    if(index==0){
        ShopList* temp = head;
        head=head->next;
        delete temp;
        return;
    }

    int size = Size(head);

    if(index>=size){
        cout<<"you went beyond the scope"<<endl;
        return;
    }

    ShopList* temp = head;
    int counter = 0;

    while (temp!=nullptr && counter<index-1)
    {
        temp=temp->next;
        counter++;
    }

    ShopList* toDelete = temp->next;
    temp->next=temp->next->next;
    delete toDelete;

}

int main(){


    ShopList* head = nullptr;
    head = addFirstElement("milk", 2, 3);
    push_back(head, "bread", 1, 2);
    push_back(head, "eggs", 3, 1);
    push_back(head, "cheese", 4, 1);
    push_back(head, "butter", 5, 1);
    push_back(head, "sugar", 1, 2);

    
    Print(head);
    Destroy(head);
    return 0;

}