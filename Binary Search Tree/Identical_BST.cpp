#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*left, *right;

    Node(int val){//constructer
        data = val;
        left = NULL;
        right =NULL;

    }
};

//isIdentical
bool isIdentical(Node*root1 , Node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}

/*
                2
              /  \
            1     3

*/



int main(){


    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(3);

    Node* root2 = new Node(5);
    root2->left = new Node(4);
    root2->right = new Node(6);

    if (isIdentical(root1, root2)){
        cout<<"BST are identical"<<endl;
    }
    else{
        cout<<"BST are not identical"<<endl;
    }
    


    return 0;
}