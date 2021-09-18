#include<iostream>
using namespace std;


int main(){

    
    int arr1[5] = {1,2,3,4,5};

    int arr2[5] = {5,6,7,8,9};


    // swap(arr1,arr2);
    int arr[5];
    

    for(int i=0;i<5;i++){
        arr[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = arr[i];
    }

    // cout<<"arr[]";
    // for(int i=0;i<5;i++){
    //     cout<<arr1[i];
    // }





    cout<<"arr1"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;



    cout<<"arr2"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }






}