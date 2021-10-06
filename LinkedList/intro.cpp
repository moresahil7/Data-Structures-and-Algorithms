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
    head=n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }


    node* temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = n;
}

bool Search(node* head, int key){

    while(head != NULL){
        if(head->data == key){
            return true;
        }
        head=head->link;
    }
    return false;
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
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    display(head);

    insertAtHead(head,10);
    display(head);

    cout<<Search(head, 20);
}