#include<iostream>
using namespace std;

//get bit means get the present bit at given position


int bit(int a , int pos){
    return ((a & (1<<pos))!=0);
}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<bit(a,b)<<endl;



    return 0;
}