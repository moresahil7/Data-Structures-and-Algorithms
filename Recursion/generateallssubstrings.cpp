#include<iostream>

using namespace std;


void generateSub(string str , string ans){




    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }





    char ch =str[0];
    string restStr = str.substr(1);

    generateSub(restStr , ans);
    generateSub(restStr , ans+ch);



}

int main(){
    generateSub("Sahil" , "");
}
