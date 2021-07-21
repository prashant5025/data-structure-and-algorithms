#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcHeight(Node* root){

    if(root == NULL){
        return 0;
    }

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return max(lheight, rheight) + 1;
}




int main(){

    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(3);
    root->left->left= new Node(9);
    root->left->right = new Node(1);
    root->right->left = new Node(2);
    root->right->right = new Node(1);
    root->left->right->left = new Node(2);
    root->right->left->right= new Node(6);
    root->left->right->left->left = new Node(3);
    root->left->right->left->right = new Node(5);
    root->right->left->right->right= new Node(7);

    cout<<calcHeight(root)<<endl;
    return 0;
}