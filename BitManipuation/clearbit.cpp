#include<iostream>
using namespace std;


int clearbit(int a,int pos){
    return (a & (~(1<<pos)));
}

int main(){
    cout<<clearbit(5,2)<<endl;
}