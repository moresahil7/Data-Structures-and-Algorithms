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

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head =n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;


}

node* merge(node* &head1 , node* &head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    
    node* dummyNode =  new node(-1);
    node* ptr3 = dummyNode;


    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while(ptr1 != NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while(ptr2 != NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummyNode->next;
}

void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

int main() {
    node* head1 = NULL;

   int arr[] = {1,2,3,4,5};
    node* head2 = NULL;

   int arr1[] = {6,7,8};

   for(int i=0;i<5;i++){
       insertAtTail(head1 , arr[i]);
   }
   for(int i=0;i<3;i++){
       insertAtTail(head2 , arr1[i]);
   }

    display(head1);
    display(head2);

   node* result = merge(head1,head2);
   display(result);

 

}
