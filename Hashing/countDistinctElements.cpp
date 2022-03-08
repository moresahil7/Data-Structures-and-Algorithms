#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

    unordered_set<int> s;

    int arr[] = {5, 10, 15, 5, 6, 5};

    for (int i = 0; i < 6; i++)
    {

        s.insert(arr[i]);
    }

    for(auto it:s){
        cout<<it<<endl;
    }

    cout<<"Distinct Elements are"<<s.size()<<endl;
}