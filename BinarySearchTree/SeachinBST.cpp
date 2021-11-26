#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};


Node* searchInBST(Node* root, int key){

    if(root == NULL){
        return NULL;
    }


    if(root->data == key){
        return root;
    }

    if(root->data > key){
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key);
}

void inorder(Node* root){

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node* root = NULL;

    root = new Node(5);

    root->left = new Node(1);
    root->right = new Node(7);

    root->left->right = new Node(3);
    root->left->right->left = new Node(2);
    root->left->right->right = new Node(4);




    inorder(root);
    cout<<endl;

    if(searchInBST(root,5) == NULL){
        cout<<"key doesnt exists"<<endl;
    }
    else{
        cout<<"key exist"<<endl;
    }
}