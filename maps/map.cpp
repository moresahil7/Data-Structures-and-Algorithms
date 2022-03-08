#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string> &m)
{
    cout<<m.size()<<endl;

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "Sahil"; //O(log(n))  n=size of map
    m[5] = "Prathamesh";
    m[3] = "Harshad";
    m.insert({0, "Niraj"});

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it!=m.end(); it++){
    //     cout<<(*it).first<< " " <<(*it).second<<endl;
    // }

    // printMap(m);

    // auto it = m.find(5);

    // if (it == m.end())
    // {
    //     cout <<"element not found"<< endl;
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    auto it1 = m.find(8);

    if(it1 != m.end()){
    m.erase(it1);
    }
    m.clear();

    // m.erase(3); //O(log(n))
    printMap(m);

}