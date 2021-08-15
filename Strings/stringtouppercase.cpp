#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {
    // string str = "abcdef";

    // cout<<'a'-'A'<< endl;



    // for(int i =0;i<=str.size();i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i] = str[i]-32;
    //     }

    // }
    // cout<<str;

    string s = "ABCDEF";

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s;


    return 0;

  
}