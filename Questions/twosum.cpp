#include<iostream>
using namespace std;


int main(){
    
    
    
    int n, target;
    cin>>n;
    cin>>target;
    int arr[n] ;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        if(arr[i] + arr[i+1] == target){
            cout<<i<<" "<<i+1;
        }
    }
}