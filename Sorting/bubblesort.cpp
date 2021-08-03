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
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
            

    }
    
}
    cout<<"Sorted elements are"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}