#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements to be entered in an array"<<endl;
    cin>>n;
    int arr[n];

cout<<"Enter elements in an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in an array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1; i<n ; i++){
        int current = arr[i];
        int j = i-1;
        while( arr[j]>current && j>=0 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        current++;
       
    }
  
 






    cout<<"Sorted elements are"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}