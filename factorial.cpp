#include<iostream>
using namespace std;



int main(){


    int n;
    cin>>n;

    int fact = 1;


    for(int i=;i<=n;i++){

        fact = fact*i;

        cout<<fact<<"  ";

    }
    cout<<endl;

    cout<<fact;
}