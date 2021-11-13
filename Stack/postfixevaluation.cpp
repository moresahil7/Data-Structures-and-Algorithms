#include<iostream>
#include<stack>
using namespace std;


int postfix(string s){
    stack<int> st;


    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i] - '0');
        }


        else{
            int oper2 =  st.top();
            st.pop();
            int oper1 = st.top();
            st.pop();



            switch (s[i])
            {
            case '+':
                st.push(oper1+oper2);
                break;
            case '-':
                st.push(oper1-oper2);
                break;
            case '*':
                st.push(oper1*oper2);
                break;
            case '/':
                st.push(oper1/oper2);
                break;
            
          
            }
        }
    }
    return st.top();
}

int main(){


    cout<<postfix("46+2/5*7+");

}