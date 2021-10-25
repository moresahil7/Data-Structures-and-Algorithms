//Append last K nodes of linked list to the start of linked list

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void inserAtHead(node* &head,int val){
    node* n = new node(val);

    n->next = head;
    head = n;
}


void insertAtTail(node* &head , int val){
    node* n = new node(val);

    if(head == NULL){
        head =n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =  n;
}


int length(node* &head){
    int l = 0;

    node* temp = head;

    while(temp!= NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* appendKnodes(node* &head, int k){
    node* newTail;
    node* newHead;
    node* tail = head;

    int l = length(head);
    int count = 1;

    while(tail->next != NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }

        count++;
        tail = tail->next;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;

}



void display(node* head){
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    int arr[] = {1,2,3,4,5,6};

    node* head = NULL;

    for(int i=0;i<6;i++){

        insertAtTail(head , arr[i]);
    }
    display(head);

    node* result =  appendKnodes(head,3);
    display(result);

}