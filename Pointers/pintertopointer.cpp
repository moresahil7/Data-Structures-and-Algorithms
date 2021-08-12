#include<iostream>
using namespace std;

int main(){
    int a =10;
    int *aptr = &a;
    // cout<<aptr<<endl;


    int **bptr = &aptr; //create a pointer to pointer

    cout<<*bptr; //returns address of "a"
    cout<<bptr; // returns address of "aptr"
    cout<<**bptr; 



    return 0;
}