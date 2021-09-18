#include<iostream>
using namespace std;



int main(){
    int n=350;
    int dec =0;
    int base_cond =1;






    while(n){
        int last_digit = n%10;
        n= n/10;




     dec =dec + last_digit * base_cond;


     base_cond = base_cond *8;
    }

    cout<<dec;
}