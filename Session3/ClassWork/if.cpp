#include<iostream>
using namespace std;


int main(){

    //declare a integer type variable
     int age;
    
    //print Enter the score
     cout << "Enter the age " << endl;
    
    //take input into score variable
    cin >> age;
    
    //if condition
    if(age >=18) {
     cout << "I can vote" << endl;
    }
    else {
    cout << "I cannot vote" << endl;
    }
}
