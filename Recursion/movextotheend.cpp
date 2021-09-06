#include<iostream>

using namespace std;


string moveToEnd(string str){
    if(str.length() == 0){
        return "";
    }

    char ch = str[0];

    string ans = moveToEnd(str.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;

}


int main(){


    cout<<moveToEnd("sxxdrtdxxgghx");

}