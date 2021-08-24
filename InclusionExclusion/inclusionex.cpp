#include<iostream>

using namespace std;
//this code returns the total numbers divisible by  a and b from 1 to n

int divisible(int n ,int a ,int b){
    int num1 = n/a;
    int num2 = n/b;
    int num3 = n/(a*b);


    return num1+num2-num3;

}


int main(){
    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b);


}