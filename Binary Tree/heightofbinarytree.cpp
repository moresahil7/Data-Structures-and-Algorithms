#include<iostream>

using namespace std;



struct node{
    int data;
    node* right;
    node* left;

    node(int val){
        data = val;
        right = NULL;
        left= NULL;
    }
};


int calcHeight(node* root){

    if(root == NULL){
        return 0;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    return max(leftHeight,rightHeight) + 1;

}

int main(){
    struct node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<calcHeight(root);

}