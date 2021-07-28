#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"Enter number to check whether it is prime or not"<<endl;
    cin>>n;
    bool flag = true;



    for(int i=2 ; i<=n/2 ; i++){
        if( n % i == 0){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number";
    }

}