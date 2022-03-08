#include<iostream>
#include<unordered_set>
using namespace std;

int main() {

    unordered_set<int> s;

    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);


    if(s.find(7) == s.end()){
        cout<<"not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    // for(auto it: s){
    //     cout<<it<<endl;
    // }
    cout<<s.size()<<endl;


}