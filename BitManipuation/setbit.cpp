#include<iostream>
using namespace std;


//set bit means if given position has bit 0 make it 1 and if it is 1 keep it unchanged

int bit(int a , int pos){
    return(a | (1<<pos));
}

int main(){
    cout<<bit(5,1)<<endl;



    return 0;
}