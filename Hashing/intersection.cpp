#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;


void intersectionOfArrays(int a1[], int a2[],int m,int n){
    unordered_set<int> s;
    vector<int> ans;
    int count = 0;

    for(int i=0;i<m;i++){
        s.insert(a1[i]);
    }

    for(int i=0;i<n;i++){
        if(s.find(a2[i]) != s.end()){

            cout<<a2[i]<<" ";
            
            s.erase(a2[i]);

        }
    }

    // for(auto it: s){
    //     ans.push_back(it);
    // }



}


int main(){

    int arr[] = {1,2,2,1};
    int arr1[] = {2,2,2,1};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);

    // vector<int> ans = unionOfArrays(arr,arr1,m,n);

    // for(auto it:ans){
    //     cout<<it<<" ";
    // }

    // cout<<"Answer "<<ans.size();

    intersectionOfArrays(arr,arr1,m,n);


    
}