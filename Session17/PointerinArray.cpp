#include<iostream>
using namespace std;


int main() {

  int arr[] = { 12, 44, 16, 18 };
// TODO:1 ->  & operator to access
//   cout<<arr[0]<<endl;
//   cout<<arr<<endl;
//   cout<<&arr<<endl;
//   cout<<&arr[0]<<endl;

// TODO:2 -> pointer access in array

// int* ptr = arr;
// cout<<ptr<<endl; // address of arr === 0x51aafff690
// cout<<*ptr<<endl; // value at arr ---> 12
// cout<<&ptr<<endl; // address of ptr ===  0xc9519ff6f8 diffrent from arr


// TODO:3 -> direffrence on array

cout<< *arr << endl;// first elemt of arr ----> 12
cout<<arr[0]<<endl; //same to *arr

cout<< *arr + 1 << endl; // first elementt + 1 == 13

cout<< *(arr+1) << endl; // next index wala element  == 44
cout<<arr[1]<<endl; //it means *(arr+1) === arr[1] 

cout<< *(arr+2) << endl; // next index wala element  == 16
cout<<arr[2]<<endl; // its means arr[2] === *(arr+2)

cout<< *(arr) + 2 << endl;// first element + 2 == 14


return 0;
}