#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;


vector<int> unionOfArrays(int a1[], int a2[],int m,int n){
    unordered_set<int> s;
    vector<int> ans;

    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }

    for(int i=0;i<m;i++){
        s.insert(a2[i]);
    }

    for(auto it: s){
        ans.push_back(it);
    }

    return ans;


}


int main(){

    int arr[] = {1,2,3,4,5,6};
    int arr1[] = {5,6,7,8,9};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);

    vector<int> ans = unionOfArrays(arr,arr1,m,n);

    for(auto it:ans){
        cout<<it<<" ";
    }

    cout<<"Answer "<<ans.size();


    
}