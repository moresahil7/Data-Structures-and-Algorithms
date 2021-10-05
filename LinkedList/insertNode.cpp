#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *link;
};

void Display(Node *n){
    while(n !=NULL){
        cout<<n->data<<" ";
        n = n->link;
    }
}

int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();



    head->data = 11;
    head->link = second;
    second->data = 12;
    second->link = third;
    third->data=13;
    third->link=NULL;
    Display(head);



}