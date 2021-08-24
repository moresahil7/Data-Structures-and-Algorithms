#include<iostream>
using namespace std;

//code to display fibonacci series upto n numbers



void fibonacci(int num){
    int t1 = 0;
    int t2 = 1;
    int next;
    for(int i = 1;i<=num;i++){
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}