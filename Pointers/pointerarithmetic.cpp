#include<iostream>

using namespace std;


int main() {
    char a = 'c';

    char *cptr = &a;

    cout<<cptr<<endl;;

    cptr++;   // increments by 1 as char is of 1 bytes

    cout<<cptr;
    return 0;
}
// int main() {
//     int a =1;

//     int *aptr = &a;

//     cout<<aptr<<endl;;

//     aptr++;   // increments by 4 as int is of 4 bytes

//     cout<<aptr;
//     return 0;
// }