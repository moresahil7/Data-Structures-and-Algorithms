#include<iostream>
using namespace std;


int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a[n][m];
    

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}