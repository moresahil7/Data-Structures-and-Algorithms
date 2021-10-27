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


void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->link = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n =new node(val);

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
void insertNodeAtPosition(node* &head,int val,int pos){
    node* n = new node(val);

    if(pos == 1){
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    int count = 1;
    while(count != pos-1){
        temp = temp->link;
        count++;
    }
    node* t;
    t = temp->link;
    temp->link = n;
    n->link = t;
}


bool Search(node* head, int key){
    while(head != 0){
        if(head->data == key){
            return true;

        }
        head = head->link;
    }
    return false;
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


    if(head->link == NULL){
        deleteAtHead(head);
        return;

    }

    node* temp = head;

    while(temp->link->data != val){

        temp=temp->link;

    }

    node* toDelete = temp->link;


    temp->link = temp->link->link;
    delete toDelete;

}

void display(node* head){
     while(head != NULL){
         cout<<head->data<<"->";
         head = head->link;
     }
     cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;

    insertAtTail(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 14);

    insertAtHead(head, 15);
    insertAtHead(head, 18);

    // deletion(head,13);
    // deleteAtHead(head);

    // display(head);

    // cout<<Search(head, 12);
    insertNodeAtPosition(head,23,3);
    display(head);
}