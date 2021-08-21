#include<iostream>
using namespace std;


int add(int a,int b){
    return a+b;

}
int mul(int a,int b){
    return a*b;
}



int main(){
    int a = 2;
    int b = 3;

    cout<<add(a,b)<<endl;
    cout<<mul(a,b);

}