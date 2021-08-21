#include<iostream>
using namespace std;



//clear bit means if bit is 1 make it 0 and if it is 0 keep it as it is


int clearbit(int a,int pos){
    return (a & (~(1<<pos)));
}

int main(){
    cout<<clearbit(5,2)<<endl;
}