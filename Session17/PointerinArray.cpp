#include<iostream>
using namespace std;

void solve(int arr[]){
  cout<<"Size inside solve funciton "<< sizeof(arr) <<endl;
}


int main() {

//  int arr[] = { 12, 44, 16, 18 };
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

// cout<< *arr << endl;// first elemt of arr ----> 12
// cout<<arr[0]<<endl; //same to *arr

// cout<< *arr + 1 << endl; // first elementt + 1 == 13

// cout<< *(arr+1) << endl; // next index wala element  == 44
// cout<<arr[1]<<endl; //it means *(arr+1) === arr[1] 

// cout<< *(arr+2) << endl; // next index wala element  == 16
// cout<<arr[2]<<endl; // its means arr[2] === *(arr+2)

// cout<< *(arr) + 2 << endl;// first element + 2 == 14


// TODO:4 -> character Array

// char ch[30] = "Shubham";

// char* c = ch;

// cout<< ch << endl; //Shubham    
// cout<< &ch << endl; //0xb5ca5ff8e0
// cout<< ch[0] << endl; // S 
// cout<< &c << endl; // 0xb5ca5ff8d8
// cout<< *c << endl; // S


// cout<<c<<endl; //shubham print ho gya 
// //kayede se dekha jaye to first element ka address print hona chiaye but ye character array h yaha par cout ka behaviour alag hota h char array ke liye

// //Example :
// char chr = 'k';
// char* cptr = &chr; // k print hone ke baad NULL milne tak garbage print ho rha h like === kα·▼┼▄


// cout<<cptr<<endl;


// TODO:5 -> pointer in function 
//Pass by refrence ka proof

int arr[10] = {1,2,3,4};
cout<<"Size of insde main function "<<sizeof(arr)<<endl;  // Size of insde main function 40
solve(arr); // Size inside solve funciton 8

return 0;
}