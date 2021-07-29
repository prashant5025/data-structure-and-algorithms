#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


//check for BST
bool isBST(Node* root, Node* min= NULL, Node* max=NULL){

    if(root == NULL){
        return true;
    }

    if(min!= NULL && root->data <= min->data){
        return false;
    }

    if(max!= NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return leftValid and rightValid;


}

void preorder(Node* root){

    if(root==NULL){
        return;
    }

    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}


int main(){

    Node* root1 = new Node(7);
    root1->left = new Node(5);
    root1->right = new Node(8);
    root1->left->left = new Node(4);
    root1->left->right = new Node(6);
    root1->right->right = new Node(9);

    preorder(root1);
    cout<<endl;

    if(isBST(root1, NULL, NULL)){
        cout<< "valid BST"<<endl;
    }else{
        cout<<"Invalid BST"<<endl;
    }


    return 0;
}