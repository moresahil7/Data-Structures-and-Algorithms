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

void insertAtHead(node* &head,int val){

    node* n = new node(val);
    n->link = head;
    head = n;
}

void insertAtTail(node* &head , int val){
    node* n = new node(val);

    if(head == NULL){
        head =n ;
        return;
    }


    node* temp = head;

    while(temp->link != NULL){
        temp = temp->link;

    }

    temp->link = n;



}

void deleteAtHead(node* &head){

    node* toDelete = head;
    head = head->link;
    delete toDelete;
}

void deletion(node* &head , int val){

    if(head == NULL){
        return;
    }

    if(head-> link == NULL){
        deleteAtHead(head);
        return;
    }



    node* temp = head;

    while(temp->link->data != val){
        temp = temp->link;
    }

    node* toDelete = temp->link;


    temp->link = temp->link->link;

    delete toDelete;
}

void display(node* &head){
     while(head != NULL){
         cout<<head->data<<"->";
         head = head->link;
     }

    cout<<endl;
}


bool search(node* head, int key){

    while(head != NULL){
        if(head->data == key){
            return true;
        }
        head=head->link;
    }
    return false;
}


int main(){
    node* head = NULL;

    insertAtTail(head , 10);
    insertAtTail(head , 11);
    insertAtTail(head , 12);
    insertAtTail(head , 13);
    insertAtHead(head , 9);

    cout<<search(head , 10)<<endl;

    deletion(head,10);
    deleteAtHead(head);




    display(head);


}