#include<iostream>
using namespace std;

int main() {


    int N,P,amt;
    cin>>N;
    cin>>P;


    amt = N * P;

    // cout<<amt;
    

    if(amt>5000){
        cout<<amt-amt*0.2;
    }
    else if(amt>2500 && amt<=5000){
        cout<<amt-amt*0.1;
    }
    else if(amt>=1000 & amt<=2500){
        cout<<amt-amt*0.05;
    }

    

    

    return 0;



}