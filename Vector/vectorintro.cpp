#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector <int> v;

    v.push_back(12);
    v.push_back(15);
    v.push_back(17);
    v.push_back(16);



    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    
}


    vector<int> :: iterator it;

    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    // v.pop_back();  // Pop function is used to delete end element 
    // v.pop_back();
     for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }


    for(auto element:v){
        cout<<element<<endl;
    }

    vector <int> v2;
    v2.push_back(23);
    v2.push_back(30);
    v2.push_back(45);
    v2.push_back(60);


    for(auto element:v2){
        cout<<element<<endl;
    }

    swap(v,v2);

      for(auto element:v){
        cout<<element<<endl;
    }
      for(auto element:v2){
        cout<<element<<endl;
    }


    vector<int> v3(3,45);

    for(auto element:v3){
        cout<<element;
    }




    }


