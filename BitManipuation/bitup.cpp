#include<iostream>
using namespace std;


//Update bit means change the bit at given position if zero make it 1 and if 1 make it 0

int clear(int a,int pos){
    int temp = (a & (~(1<<pos)));


    return (temp | (1<<pos));


}

int main(){
    cout<<clear(5,1);
}

