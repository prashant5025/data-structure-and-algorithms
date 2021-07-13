#include<iostream>
using namespace std;

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

//............DELETION AT BEGINNING..............

void deleteAtHead(node* &head){
    node* todelete=head;

    head=head->next;

    delete todelete;
}


//..............DELETION.....................


void deletion(node* &head, int val){

    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}



int main(){
    node* head = NULL;
    
    
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 12);
    insertAtTail(head, 10);
    display(head);
    cout<<endl;

    //deletion(head,3);
    deleteAtHead(head);
    display(head);
    return 0;
}
