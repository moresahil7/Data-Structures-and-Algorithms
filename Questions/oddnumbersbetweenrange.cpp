#include<iostream>
using namespace std;

void odd(int a,int b){
    int arr[100];
    int j=0;
    for(int i=a;i<=b;i++){
        if(i%2 != 0){
                arr[j] = i;
                j++;
            }
            
        }
    
       
    }
  
  


int main(){
    int a,b;
    cin>>a>>b;



  odd(a,b);
}