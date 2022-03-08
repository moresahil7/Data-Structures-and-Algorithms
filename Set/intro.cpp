#include<iostream>
#include<set>
using namespace std;


int main() {
    set <int > s;

    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(0);
    s.insert(6);
    s.insert(1);
    s.insert(5);
    s.insert(7);


    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;/////////////////////////////
    s.erase(3);
       for(auto i : s){
        cout<<i<<" ";
    }
}