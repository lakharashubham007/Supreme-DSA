#include <iostream>
using namespace std;

int main() {


    char bhai[100];
    cout<<"Enter Bhai name: "<<endl;
    
    //cin>>bhai;//space ke baad wala print nahi ho rha h 
    

    //getline function

    
    cin.getline(bhai, 100);



    cout<<"Bhai name is: " << bhai <<endl;
}