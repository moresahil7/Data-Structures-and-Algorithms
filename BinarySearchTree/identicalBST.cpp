#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool identicalBST(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if(root1== NULL || root2 == NULL){
        return false;
    }

    else{
        bool condition = root1->data == root2->data;
        bool left = identicalBST(root1->left, root2->left);
        bool right = identicalBST(root1->right, root2->right);

    if(condition && left && right){
        return true;
    }return false;
    }

   
}



int main(){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    if(identicalBST(root1,root2)){
        cout<<"identical"<<endl;
    }
    else{
        cout<<"not identical"<<endl;
    }
}