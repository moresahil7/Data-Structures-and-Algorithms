#include<iostream>

using namespace std;


bool sorted(int arr[] , int n){
    if(n == 1){
        return true;
    }




    bool restArray = sorted(arr+1 , n-1);  //arr+1 indicates pointer will be at element with index 1  and (n-1) is size of array
    return (arr[0]<arr[1] && restArray);
}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr ,n);
}