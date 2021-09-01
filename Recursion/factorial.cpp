#include<iostream>
using namespace std;

int Factorial(int n){


    if(n ==0){
        return 1;
    }

    int prevFact = Factorial(n-1);

    return n*prevFact;

    
}


int main() {
    int n;
    cin>>n;

    cout<<Factorial(n);
}