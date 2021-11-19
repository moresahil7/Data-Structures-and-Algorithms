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

int search(int inorder[], int start,int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}


Node* buildtree(int postorder[] , int inorder[], int start, int end){
    static int idx = 6;

    if(start>end){
        return NULL;
    }

    int curr = postorder[idx];
    idx--;

    Node* node = new Node(curr);

    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);

    node->right = buildtree(postorder,inorder,pos+1,end);
    node->left = buildtree(postorder,inorder,start,pos-1);

    return node;


}
void printInorder(Node* root){

    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


int main(){
    int postorder[] = {4,5,2,6,7,3,1};
    int inorder[] = {4,2,5,1,6,3,7};


    Node* root = buildtree(postorder,inorder,0,6);

    printInorder(root);
}