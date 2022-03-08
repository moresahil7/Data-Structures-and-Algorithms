#include<iostream>
using namespace std;




void print(int n){
    cout<<n<<" ";
    
    print(n);
}

int main(){

    print(1);

}