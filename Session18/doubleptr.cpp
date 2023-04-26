#include<iostream>
using namespace std;


int main() {


    int a = 5; 
    int* p = &a;
    int** q = &p;


    cout<< a << endl; //5

    cout<< &a  << endl; //0xe7e7bff86c
    cout<< p  << endl; //0xe7e7bff86c
    cout<< &p << endl; //0xe7e7bff860
    cout<< *p << endl; //5
    cout<<  q << endl; //0xe7e7bff860
    cout<<  &q << endl; //0xe7e7bff858
    cout<<  *q << endl; //0xe7e7bff86c
    cout<<  **q << endl; //5

    return 0;
}