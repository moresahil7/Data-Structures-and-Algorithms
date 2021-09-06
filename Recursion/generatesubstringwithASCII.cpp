#include<iostream>

using namespace std;


void generateSubstr(string str , string ans){




    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }





    char ch =str[0];
    int code = ch;
    string restStr = str.substr(1);

    generateSubstr(restStr , ans);
    generateSubstr(restStr , ans+ch);
    generateSubstr(restStr , ans+ to_string(code));




}

int main(){
    generateSubstr("AB" , "");
}
