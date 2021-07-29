#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
}

int sum(int n1 , int n2){
    print(n1);
    print(n2);
    int add = n1+n2;
    return add;

}

int main(){
    int a ;
    int b ;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}