#include <iostream>

using namespace std;

void max_of_4(int a, int b, int c,int d){
if(a>b){
    if(a>c){
        if(a>d){
            cout<<a;
        }
    }
    else{
        cout<<d;
    }
    
}
else if(b>c){
    if(b>d){
        cout<<b;
    }
    else{
        cout<<d;
    }
}
else if(c>d){
    cout<<c;
}

else{
    cout<<d;
}
}
int main() {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    max_of_4(a,b,c,d);


    
    
    
}