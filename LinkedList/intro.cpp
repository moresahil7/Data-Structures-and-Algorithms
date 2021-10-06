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
    node* n =  new node(val);

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
     cout<<endl;
}

bool search(node* head, int key){


    while(head != NULL){
        if(head->data == key){
            return true;

        }
        head = head->link;

    }
    return false;
}

int main(){
    node* head =NULL;


    insertAtTail(head , 23);
    insertAtTail(head , 24);
    insertAtTail(head , 25);
    insertAtTail(head , 26);
    insertAtTail(head , 27);
    display(head);



    insertAtHead(head, 10);
    display(head);

    cout<<search(head, 23);


}