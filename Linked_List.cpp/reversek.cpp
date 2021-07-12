#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void push(node*&head, int val){
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




void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reversek(node* &head, int k){
    node* prevptr= NULL;
    node* currptr =head;
    node* nextptr;

    int count =0;
    while (currptr != NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr= nextptr;
        count++;
    }
    if(nextptr!= NULL){

    head->next = reversek(nextptr, k);
    }
    return prevptr;

}







int main(){
    node*head = NULL;

    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);
    push(head, 7);

    display(head);
    int k=2;
    node* newhead = reversek(head,k);
    display(newhead);
    return 0;
}