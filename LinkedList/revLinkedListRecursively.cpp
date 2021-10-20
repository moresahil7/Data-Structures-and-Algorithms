#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node* link;


    node(int val){
        data = val;
        link = NULL;
    }
};

void insertAtTail(node* &head , int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }


    node* temp = head;

    while(temp->link != NULL){
        temp= temp->link;
    }

    temp->link = n;


}

void display(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->link;
    }

    cout<<"NULL"<<endl;
}


node* revRecursively(node* &head){

    if(head == NULL || head->link == NULL){
        return head;
    }




    node* newHead = revRecursively(head->link);
    head->link->link = head;
    head->link = NULL;

    return newHead;
}

//iterative method

node* reverse(node* &head){
    node* currPtr = head;
    node* nextPtr;
    node* prevPtr = NULL;

    while(currPtr != NULL){
        nextPtr = currPtr->link;
        currPtr->link = prevPtr;




        prevPtr = currPtr;
        currPtr = nextPtr;

    }

    return prevPtr;

}

int main() {

    node* head = NULL;


    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);




    display(head);

    // node* newHead = revRecursively(head);
    node* newHead = reverse(head);
    display(newHead);

}