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


int search(int inorder[],int start,int end, int curr){

    for(int i=start;i<=end;i++){
        if(inorder[i] == curr){
            return i;

        }
    }
    return -1;

}

Node* buildtree(int preorder[] , int inorder[] , int start, int end){

   static int idx = 0;

    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);
    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);

    node->left = buildtree(preorder,inorder,start,pos-1);
    node->right = buildtree(preorder, inorder, pos+1,end);

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
    int inorder[] = {4,2,5,1,6,3,7};
    int preorder[] = {1,2,4,5,3,6,7};

   
    Node* root = buildtree(preorder,inorder,0,6);

    printInorder(root);
}