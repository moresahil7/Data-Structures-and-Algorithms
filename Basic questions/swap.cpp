#include<iostream>
using namespace std;






int main() {
    int a=5;
    int b = 10;

    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;


    int temp = a;
    a=b;
    b = temp;
  

    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
}