#include<iostream>
using namespace std;

int binarySearch(int array[] , int n , int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
    
   if(array[mid] == key){
       return mid;
   }
   else if(array[mid]>key){
        e = mid-1;
    }
   else{
        s = mid+1;

}


}

return -1;

}

int main(){
    int n;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the elements in an array"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Your array is"<<endl;

    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    int key;
    cout<<"enter the element you wanna search for"<<endl;
    cin>>key;

    

    cout<<"The index of element you searched for is"<<endl;
    cout<<binarySearch(array , n , key);

}
