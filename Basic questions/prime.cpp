#include<iostream>
using namespace std;



int main(){

    int n,t;
    cin>>t;   //no of test cases

    while(t--){
    cin>>n;
    bool flag =true;


    for(int i=2;i<=n/2;i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }


    if(flag == false){
        cout<<"not prime number";

    }
    else{
        cout<<" prime number";
    }
    }
}