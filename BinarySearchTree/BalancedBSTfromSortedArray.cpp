#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val){

        data = val;
        left = NULL;
        right = NULL;

    }
};


Node* balancedBst(int arr[], int start, int end){

    if(start>end){
        return NULL;
    }

    int mid  = (start+end)/2;

    Node* root = new Node(arr[mid]);


    root->left = balancedBst(arr , start,mid-1);
    root->right = balancedBst(arr, mid+1,end);

    return root;

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

    int arr[] = {10,20,30,40,50};

    Node* root = balancedBst(arr, 0, 4);\

    preorder(root);





}