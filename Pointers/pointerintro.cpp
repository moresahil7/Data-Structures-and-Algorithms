#include<iostream>
using namespace std;



int main(){
    int a =10;
    // int *aptr;
    int *aptr = &a;


    cout<<aptr<<endl;  // this will return address of a


    cout<<*aptr<<endl; // this will return value of a

    *aptr = 100; // can modify the value of a



    cout<<a;



    return 0;
}