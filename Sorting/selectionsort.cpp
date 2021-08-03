#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements to be entered in an array"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in an array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    }
    cout<<"Sorted elements in an array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




}