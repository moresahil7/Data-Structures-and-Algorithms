#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;


    int t1,t2;
    t1 = 0;
    t2 = 1;


    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        int next = t1+t2;
        t1 = t2;
        t2 = next;
    }
}