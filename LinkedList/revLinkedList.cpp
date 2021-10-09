
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


void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }


    node* temp = head;

    while(temp->link != NULL){
        temp=temp->link;
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

//iterative way
node* reverse(node* head){

    node* prevPtr = NULL;
    node* currPtr = head;
    node* linkPtr;

    while(currPtr != NULL){
        linkPtr = currPtr->link;
        currPtr->link = prevPtr;


        prevPtr = currPtr;
        currPtr = linkPtr;
    }
    return prevPtr;
}



int main(){
    node* head = NULL;

    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);
    insertAtTail(head , 5);

    

    display(head);

    node* newHead = reverse(head);

    display(newHead);
}