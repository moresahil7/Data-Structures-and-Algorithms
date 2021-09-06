#include<iostream>
using namespace std;

void rev(string str){

    if(str.length() == 0){
        return ; 
    }

    string restStr = str.substr(1);
    rev(restStr);
    cout<<str[0];
  





}



int main() {
    string str = "sahil";
    
  rev(str);

}