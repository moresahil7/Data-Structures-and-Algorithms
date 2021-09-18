#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;

    int barr[n];



    int i=0;



    while(n>0){


        barr[i] = n%2;
        n=n/2;
        i++;

       

    }

    for(int j=i-1;j>=0;j--){
        cout<<barr[j];
    }
}