 #include<iostream>
 #include<math.h>
 using namespace std;


int Power(int n, int p){

    if(p==0){
        return 1;
    }


    int prevPower= pow(n , p-1);
    return n*prevPower;
}


 int main() {

     int n,p;
     cin>>n>>p;

     cout<<Power(n,p);

 }