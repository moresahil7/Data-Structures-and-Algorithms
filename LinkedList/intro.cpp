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


void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n =new node(val);

    if(head == NULL){
        head = n;
        return;
    }


    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next = n;

}

int getnode(node* &head, int pos){
    node* temp = head;
    int count = 1;
    while(count != pos){
        temp = temp->next;
        count++;
    }
   cout<<temp->data;

    
}

int length(node* &head){
    node* temp = head;

    int l=0;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
int getnodefromLast(node* &head, int positionfromtail){
    node* temp = head;
    int l=length(head);
    int count = 1;

    while(count != l-positionfromtail+1){
        temp=temp->next;
        count++;
    }
    cout<<temp->data;


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
        temp = temp->next;
        count++;
    }
    node* t;
    t = temp->next;
    temp->next = n;
    n->next = t;
}


bool Search(node* head, int key){
    while(head != 0){
        if(head->data == key){
            return true;

        }
        head = head->next;
    }
    return false;
}


void deleteAtHead(node* &head){
    node* toDelete = head;

    head = head->next;

    delete toDelete;
}


void deletion(node* &head , int val){



    if(head == NULL){
        return;
    }


    if(head->next == NULL){
        deleteAtHead(head);
        return;

    }

    node* temp = head;

    while(temp->next->data != val){

        temp=temp->next;

    }

    node* toDelete = temp->next;


    temp->next = temp->next->next;
    delete toDelete;

}

void display(node* head){
     while(head != NULL){
         cout<<head->data<<"->";
         head = head->next;
     }
     cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;

    insertAtTail(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 14);

    insertAtTail(head, 15);
    // insertAtHead(head, 18);

    // deletion(head,13);
    // deleteAtHead(head);

    // display(head);

    // cout<<Search(head, 12);
    // insertNodeAtPosition(head,23,3);
    // display(head);
    // getnode(head,3);
    display(head);
    getnodefromLast(head,2);
}