#include<iostream>
using namespace std;



int main(){

    int n;
    cin>>n;


    int a=0;
    int b= 1;


    for(int i=2;i<=n;i++){

        int temp = a+b;
        a=b;
        b=temp;

        cout<<b<<" ";

    }
    cout<<endl;


    cout<<b;
}