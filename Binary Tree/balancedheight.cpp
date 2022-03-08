#include<iostream>
using namespace std;

// balanced Height:::::  for each node difference between heights of left subtree and right subtree is less than equal to 1.

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

int height(Node* root){
    if(root == NULL){
        return 0;
    }

        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;


        if(abs(lh-rh)>1){
            return -1;
        }


        return max(lh,rh)+1;
    
}




bool isBalanced(Node* root){

    if(height(root) != -1){
        return true;
    }

    return false;
    
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}





int main(){

    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);
    cout<<endl;
    cout<<isBalanced(root)<<endl;
   

    

}


//Time complexity ::::  O(n^2)

