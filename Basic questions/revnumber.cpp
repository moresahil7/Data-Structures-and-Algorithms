#include<iostream>
using namespace std;

int main(){

    int n = 1205;

    int reverse = 0;


    while(n>0){
        reverse = reverse*10 + n%10 ;
        n=n/10;
    }

    cout<<reverse;
}