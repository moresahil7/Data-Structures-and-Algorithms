#include<iostream>
using namespace std;

int bit(int a , int pos){
    return(a | (1<<pos));
}

int main(){
    cout<<bit(5,1)<<endl;



    return 0;
}