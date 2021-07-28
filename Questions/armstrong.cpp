#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number to check if it is Armstrong or not"<<endl;
    cin>>n;
    int num=0;
    int temp = n;
    while(n>0){
       int lastdigit = n%10;
       num += lastdigit*lastdigit*lastdigit;
       n = n/10;
    }
    cout<<num<<endl;

    if(num == temp){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not an Armstrong number";
    }
return 0;
}