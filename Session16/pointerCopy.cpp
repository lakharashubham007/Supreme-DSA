#include<iostream>
using namespace std;


int main() {

    int a = 5;

    int* p = &a;
    int* q = p;


    cout<<"copied value of a in q == "<<*q<<endl; 

} 
