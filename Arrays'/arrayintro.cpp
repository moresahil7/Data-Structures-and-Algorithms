#include<iostream>
#include<climits>

using namespace std;

int main(){
    
    
    // cout<<"enter size of array";
    // int n;
    // cin>>n;
    // int array[n];

    // for(int i=0 ; i<n ;i++){
    //     cin>>array[i];
    // }
    // for(int i=0 ; i<n ;i++){
    //     cout<<array[i]<<" ";

    // }
    int maxInt = INT_MIN;
    int array[4] = {1,2,3,4};

    maxInt = max(maxInt , {1,2,3,4});
    cout<<maxInt;



}