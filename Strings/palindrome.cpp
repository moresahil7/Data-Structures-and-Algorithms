#include<iostream>
#include <bits/stdc++.h>
using namespace std;



void Palindrome(string s){


    string p = s;

   reverse(p.begin() , p.end());


    if(s == p){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


}

int main() {

    string s = "ABCCB";

    Palindrome(s);

}