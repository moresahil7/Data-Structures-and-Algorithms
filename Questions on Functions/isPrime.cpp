#include<iostream>
using namespace std;


bool isPrime(int n){
    bool flag = true;
    if(n==0 || n == 1){
        flag = false;
    }
    else{


    for(int i=2;i<=n/2;i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }
    }
    return flag;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"no Prime";
    }
}