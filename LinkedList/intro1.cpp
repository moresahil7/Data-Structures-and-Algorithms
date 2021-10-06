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

void insertAtHead(node* &head , int val){
    
    node* n =new node(val);

    n->link = head;   //link of n points towards head
    head = n;         
}


 //node* &head:-passes pointer to the head by reference so we can change head
void insertAtTail(node* &head, int val) {           
    node* n = new node(val);   //datafield of n will contain val and link will be null

    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;

    while(temp->link !=NULL){
        temp=temp->link;
    } 
    temp->link = n;                 //value added at last of the linked list // temps link points towards n
}  



bool Search(node* head, int key){
    
    while(head != NULL){
        if(head->data == key){
            return true;
        }
        head= head->link;
    }
}

void display(node* head){

    while(head != NULL){
        cout<<head->data<<"->";
        head = head->link;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    display(head);
    insertAtHead(head, 10);
    display(head);

    cout<<Search(head,2);
}