#include<iostream>
using namespace std;

int add(int n1 , int n2){
    int sum = n1+n2;
    return sum;
}


int main(){
   int a ,b;
   cin>>a>>b;
    cout<<add(a,b);
   
    return 0;
}


1)only the names of variable(n1,n2) are passed and not their types while calling the function.
2)we pass values not variables themselve.local vaiables are created in fnctions from them.
3)A function vcan be called from any other function or main function