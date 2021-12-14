#include<iostream>
#include<stack>
using namespace std;


struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        right=NULL;
        left=NULL;
    }
};

void zigzagTraversal(Node* root){
    if(root == NULL){
        return;
    }

    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool LefttoRight = true;

    currLevel.push(root);


    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();
    


    if(temp){
        cout<<temp->data<<" ";


        if(LefttoRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }

        else{
            if(temp->right){
                nextLevel.push(temp->right);
            }
            if(temp->left){
                nextLevel.push(temp->left);
            }
        }
    }

    if(currLevel.empty()){
        LefttoRight = false;
        swap(currLevel,nextLevel);
    }
    }
}




int main(){
    Node* root = new Node(34);
    root->right = new Node(12);
    root->left = new Node(13);
    root->left->left  = new Node(16);
    root->left->right = new Node(18);
    root->right->right = new Node(22);

    zigzagTraversal(root);

}