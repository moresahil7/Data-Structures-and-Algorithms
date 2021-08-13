#include<iostream>
using namespace std;


int main(){

    int a = 100;
    int *p = new int();      //"new" operator is used to allocate memory in heap
    *p = 10;

    delete(p);  // this deallocates memory


    p = new int[4];  //store array in p

    delete[]p;   //deletes the block of an array


    p=NULL;  // value of pointer will be NULL and hence it will not point at any memory




    cout<<p;
}