#include<iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};

    // cout<<*arr;

    int *ptr = arr;

    // for(int i=0 ; i<6 ; i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    for(int i=0 ; i<6 ; i++){
        cout<<*arr+i<<endl;
    }

    return 0;
}
