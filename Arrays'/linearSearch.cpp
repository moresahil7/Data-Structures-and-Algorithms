#include<iostream>
using namespace std;

int linearSearch(int array[] , int n , int key){
    for(int i=0 ; i<n ;i++){
        if(array[i] == key){
            return i;
        }
    }
        return -1;


}


int main(){
    int n;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the elements in an array"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Your array is"<<endl;

    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    int key;
    cout<<"Enter the element you are in search of"<<endl;;
    cin>>key;


    cout<<"The index of element you searched for is"<<endl;
    cout<<linearSearch(array , n , key);

}
