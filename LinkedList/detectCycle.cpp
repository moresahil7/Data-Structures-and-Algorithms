//Floyds algorithm | hare and tortoise algorithm

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
    node* n = new node(val);
    n->link = head;
    head = n;
}
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
node* revKnodes(node* &head , int k){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;
    int count = 0;

    while(currPtr != NULL & count<k){
        nextPtr = currPtr->link;
        currPtr->link = prevPtr;

        prevPtr=currPtr;
        currPtr=nextPtr;
        count++;
    }

    if(nextPtr != NULL){
        head->link = revKnodes(nextPtr,k);
    }
    return prevPtr;
}

void display(node* head){
    
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->link;
    }
    cout<<"NULL"<<endl;
}


void makeCycle(node* &head , int pos){
     node* temp = head;

     node* startNode;
     int count = 1;

     while(temp->link != NULL){
         if(count == pos){
             startNode = temp;
         }
         temp = temp->link;
         count++;

     }
     temp->link = startNode;
}


void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;


    do
    {
        slow = slow->link;
        fast = fast->link->link;
    } while (slow != fast);

    fast = head;
    while(slow->link != fast->link){
        slow = slow->link;
        fast = fast->link;
    }
    slow -> link = NULL;
    
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast !=NULL && fast->link != NULL){
        slow = slow->link;
        fast = fast->link->link;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    node* head= NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,2);
    cout<<detectCycle(head)<<endl;

    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);



    // node* reverse = revKnodes(head,2);
    // display(reverse);
}