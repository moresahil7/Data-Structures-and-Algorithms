#include<iostream>
#include<vector>
using namespace std;


//brute force approach
void unionOfArrays(int a1[], int a2[], int m, int n){


    int i =0;
    int j =0;

    while(i<m && j<n){

        if(a1[i]>a2[j]){
            cout<<a2[j++];
            
        }

        else if(a1[i]<a2[j]){
            cout<<a1[i++];
        }
        else{
           cout<<a1[i++];
            j++;
        }
    }

    while(i<m){
        cout<<a1[i++];
    }

    while(j<n){
        cout<<a2[j++];
    }


}






int main() {

    int arr1[] ={1,2,3,4,5,6};
    int arr2[] = {4,5,6,7,8,9};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

     unionOfArrays(arr1,arr2,m,n);

    // for(auto it:ans){
    //     cout<<it<<" ";
    // }

    

}