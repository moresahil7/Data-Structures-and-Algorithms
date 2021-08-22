#include<iostream>
using namespace std;

int main() {
    int n,num;
    cin>>n>>num;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    for(int i =0;i<n;i++){
        if(arr[i]+arr[i+1] == num){
            cout<<i<<" "<<i+1;


        }
       
    }
}