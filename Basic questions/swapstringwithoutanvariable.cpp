#include<iostream>
using namespace std;


int main() {


    string s = "Sahil";
    string n = "Nikhil";


   s = s+n;
   n=s.substr(0,s.length()-n.length());
   
   s=s.substr(n.length());
   cout<<"s "<<s<<endl;
   cout<<"n "<<n;
  



}