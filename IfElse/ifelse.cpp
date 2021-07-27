#include<iostream>
using namespace std;

int main(){
    int a, b,c;
    cout<<"Enter the values for a , b and c"<<endl;
    cin>>a>>b>>c;


    if(a>b){
        if(a>c){
            cout<<a<<"a is greater";
        }
        else{
            cout<<c<< "c is greater";
        }
    }
    if(b>c){
        cout<<b<<"b is greater";
    }
   else{
       cout<<c<<"c is greater";
   }

int n;
   cin>>n;

   if(n%2 == 0){
       cout<<"even";
   }
   else{
       cout<<"odd";
   }
}