#include<iostream>
#include<queue>
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


void flatten(Node* root){

    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return;
    }



    if(root->left != NULL){

        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;


        Node* t = root->right;

        while(t->right != NULL){
            t=t->right;
        }

        t->right = temp;
    }
    flatten(root->right);
}
]
void inorder(Node* root){

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    flatten(root);
    inorder(root);

}