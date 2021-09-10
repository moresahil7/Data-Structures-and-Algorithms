#include<iostream>
using namespace std;

//public , private , protected access modifiers

class Car{
    public:
        int c;

        void funcpub(){
            cout<<"funcpub";
        }
    private:
        int a;
        void funcPriv(){
            cout<<" FuncPriv";
        }

    protected:
        int b;
        void funcProt(){
            cout<<"Func prot";
        }

    

};

int main() {
   Car obj;
   obj.funcpub();
   obj.funcPriv();
   obj.funcProt();

}



