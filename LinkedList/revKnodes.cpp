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

void insertAtTail(node* &head,int val){
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

void display(node* head){


    while(head !=NULL){
        cout<<head->data<<"->";
        head = head->link;
    }
    cout<<"NULL"<<endl;
}

node* reverseknode(node* &head, int k){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    int count = 0;
    while(currPtr != NULL && count<k){
        nextPtr = currPtr->link;
        currPtr->link = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;

        count++;

    }

    if(nextPtr != NULL){

    head->link =  reverseknode(nextPtr , k);
    }


    return prevPtr;


}


int main(){
    node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    insertAtHead(head , 6);
    display(head);

    int k;
    cin>>k;

    node* reverse = reverseknode(head, k);

    display(reverse);
}