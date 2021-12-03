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

bool isBSt(Node* root, Node* min, Node* max){

    if(root == NULL){
        return true;
    }

    if(min != NULL && root->data<=min->data){
        return false;
    }

    if(max != NULL && root->data >= max->data){
        return false;
    }


    bool leftValid = isBSt(root->left, min, root);
    bool rightValid = isBSt(root->right, root, max);
    
    return leftValid & rightValid;
}


int main(){
     Node* root = new Node(8);
     root->right = new Node(12);
     root->left = new Node(77);

     if(isBSt(root,NULL,NULL)){
         cout<<"BST";
     }
     else{
         cout<<"No Bst";
     }
}