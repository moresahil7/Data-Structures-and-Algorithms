#include<iostream>
using namespace std;


 class Student{
     public:
     string name;
     int age;
     bool handicapped;



     Student (string s, int a, bool handi){    //parameterized constructor
         name = s;
         age = a;
         handicapped = handi;
     };


     void printInfo(){
         cout<<name<<endl;
         cout<<age<<endl;
         cout<<handicapped<<endl;
     }

};

int main() {

    // Student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<"Name = ";
    //     cin>>arr[i].name;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Handicapped = ";
    //     cin>>arr[i].handicapped;

    // }



    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    Student a("sahil" , 23 , 0);
    a.printInfo();
    Student b("more" , 24 , 0);
    b.printInfo();
}
