#include<iostream>
using namespace std;

int bit(int a , int pos){
    return(a | (1<<pos));
}

int main(){
    cout<<bit(5,3)<<endl;



    return 0;
}