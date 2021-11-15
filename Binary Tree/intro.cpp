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


int main(){
    struct Node* root = new Node(2);
    root->right = new Node(3);
    root->left = new Node(3);
}