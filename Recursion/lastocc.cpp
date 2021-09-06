#include<iostream>
using namespace std;

int lastocc(int arr[] , int n, int i, int key){


    if(i == n){
        return -1;
    }

    int restarray = lastocc(arr,n,i+1,key);


    if(restarray != -1){
        return restarray;
    } 

    if(arr[i] == key){
        return i;
    }

    return -1;
    



}
int main() {
    int arr[] = {3,2,3,5,6};

    cout<<lastocc(arr , 7 , 0 , 5);
}