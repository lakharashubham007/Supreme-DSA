#include<iostream>
using namespace std;

int fib(int n){
    //base case 
    if( n == 1){
        return 0;
    }
    if( n == 2){
        return 1;
    }

    //Recursive solution

    return fib(n-1) + fib(n-2);
}

int main() {


    int n;
    cout<<"Enter the term you want to see"<<endl;
    cin>>n;

    int ans = fib(n); 

    cout<< ans << " is "<< n << " th term"<<endl;
    return 0;
}