#include<iostream>
#include<vector>
using namespace std;


int main() {
    //create a vector
    vector<int> arr;

    //size and capacit

    /* int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl; */

    arr.push_back(5);
    arr.push_back(8);



    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //remove

    arr.pop_back();


    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

   cout<<endl;

    vector<int> brr(10,-1);
    cout<<"size of brr "<<brr.size()<<endl;
    cout<<"capacity of brr "<<brr.capacity()<<endl;

     for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }   
    cout<<endl;

    
    return 0;
}