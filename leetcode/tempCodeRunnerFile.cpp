#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int a[n];
    int target;
    cin>>target;
    

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    for(int i=0;i<n;i++){
        if(a[i]+a[i+1]==target){
            cout<<i<<i+1<<endl;
        }
    }
}