#include<iostream>
using namespace std;


int main() {

    int a = 7;

    int* ptr = &a;


    cout<<"address of ptr = "<<&ptr<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"value at a = "<<*ptr<<endl;//derefference
    cout<<"Value store in ptr= "<<ptr<<endl; // == address of a &a
    cout<<"value at variable a = "<<a<<endl;
}
