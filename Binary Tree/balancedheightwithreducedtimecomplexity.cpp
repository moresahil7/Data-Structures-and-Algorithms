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






bool isBalanced(Node* root, int* height){
    if(root == NULL){
        return true;
    }

    int lh=0;
    int rh=0;

    if(isBalanced(root->left,&lh) == false){
        return false;
    }
    if(isBalanced(root->right,&rh) == false){
        return false;
    }

    *height = max(lh,rh) + 1;


    

    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
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
    // root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    int height = 0;

    if(isBalanced(root,&height) == true){
        cout<<"balanced tree"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
   

    
return 0;
}


//Time complexity ::::  O(n)

