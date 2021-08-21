#include<iostream>
using namespace std;

int bit(int a , int pos){
    return ((a & (1<<pos))!=0);
}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<bit(a,b)<<endl;



    return 0;
}