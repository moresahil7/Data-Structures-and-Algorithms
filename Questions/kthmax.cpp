#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n,k;

    cin>>n;


    int arr[n];

    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);


    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }



    
    int d;
    cin>>d;


    cout<<d<<" Largest element in an array is"<<arr[n-d]<<endl;




}