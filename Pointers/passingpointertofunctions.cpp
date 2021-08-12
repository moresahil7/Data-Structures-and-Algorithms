#include<iostream>

using namespace std;



    
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main(){
    int a =2;
    int b =5;

    int *aptr = &a;
    int *bptr = &b;

  swap(aptr , bptr);

    cout<<"a equals "<<*aptr<<endl;
    cout<<"b equals "<<*bptr<<endl;





       return 0;
}