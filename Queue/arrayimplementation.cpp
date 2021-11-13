#include<iostream>
using namespace std;


#define n 100

class queue{
    int *arr;
    int front;
    int back;
    public:

    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1){
            cout<<"queue overflow";
            return;
        }

        back++;
        if(front == -1){
            front++;
            return;
        }
    }
    void pop(){
        if(front == -1 || front > back){
            cout<<"queue is empty"<<endl;
        }

        front++;
    }

    int peek(){
        if(front == -1 || front > back){
            cout<<"queue is empty"<<endl;
            return -1;
        }

        return arr[front];
    }
};

int main