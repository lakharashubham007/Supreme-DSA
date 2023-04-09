#include<iostream>
using namespace std;


int main() {

    


    int shubham = 500000;

    //Create a pointer
    int* person = &shubham;

    //access
    cout<<"variable shubham: " << shubham <<endl;
    cout<<"Address of shubham: " << &shubham <<endl;
    cout<<"only pointer var name : " <<person <<endl;
    cout<<"pointer var name with diref oprator : " << *person <<endl;
    cout<<"Address of pointer: "  << &person <<endl;
}
