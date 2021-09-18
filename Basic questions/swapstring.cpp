#include<iostream>
using namespace std;



int main() {

    string s = "Sahil";
    string n = "Nikhil";


    cout<<"s = "<<s<<endl;
    cout<<"n = "<<n<<endl;



    string temp =s;
    s=n;
    n=temp;


    cout<<"s "<<s<<endl;
    cout<<"n "<<n;
}