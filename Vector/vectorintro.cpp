#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){


    vector <int> v;

    v.push_back(25);
    v.push_back(13);
    v.push_back(150);
    v.push_back(10);



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
        cout<<element<<" ";
    }
    cout<<endl;

    vector<int> v4;
    v4.push_back(34);
    v4.push_back(56);
    v4.push_back(06);
    v4.push_back(86);
    v4.push_back(576);


    sort(v4.begin(),v4.end());
    for(auto element:v4){
        cout<<element<<" ";
    }




    }


