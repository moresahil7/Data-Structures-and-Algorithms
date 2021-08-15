#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {
//     string str = "ABCDEF";

// //    cout<<'A'-'a'<< endl;


// for(int i=0;i<=str.size();i++){
//     if(str[i]>='A' && str[i]<='Z'){
//         str[i] = str[i]+32;
//     }


// }
//     cout<<str;



     string s = "sahilsantoshmore";

     transform(s.begin(), s.end() , s.begin(), ::toupper);

     cout<<s;



   
 


    return 0;

  
}