#include<iostream>
using namespace std;


int main(){


    int a;
    int b;

    cin>>a>>b;

    bool flag = true;
    for(int i=a;i<=b;i++){


        if(i ==1){
            continue;
        }

        flag = true;

        
        for(int j=2;j<=i/2;j++){

            if(i % j == 0){
                flag = false;
                
                break;
            }
            

        }
        if(flag == true){
        cout<<i<<" ";
    }
    }


    
}