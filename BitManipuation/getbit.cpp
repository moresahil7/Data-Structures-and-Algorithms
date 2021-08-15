#include<iostream>
using namespace std;

int bit(int a , int pos){
    return ((a & (1<<pos))!=0);
}

int main(){
    cout<<bit(5,2)<<endl;



    return 0;
}