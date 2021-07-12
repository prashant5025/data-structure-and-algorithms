
#include<iostream>
using namespace std;

//..........NODE STRUCTER.................


class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
        
    }
};

//...............INSERTION.................

void insertAtTail(node*&head, int val){
    node*n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


//...............DISPLAY.......................

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head = NULL;
    
    
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 12);
    insertAtTail(head, 10);
    
    display(head);
}
