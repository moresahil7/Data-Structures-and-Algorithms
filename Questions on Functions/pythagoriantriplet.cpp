#include<iostream>
#include <algorithm>
using namespace std;


bool pythagorian(int x , int y , int z)
{
    int a = max(x,max(y,z));
    int b ,c; 
    

    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    if(a*a == b*b+c*c){
        return true;
    }
    return false;


}


int main(){

    int x,y,z;
    cin>>x>>y>>z;
    
    if(pythagorian(x , y, z)){
        cout<<"Pythagorian triplet";
    }
    else{
        cout<<"not pythagorian triplet";
    }
}