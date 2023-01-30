#include <iostream>
using namespace std;

int main()
{
    //implicit type conversion
    char ch=98;
    cout << "character is:  " <<ch<< endl;
    
    int num = 'z';
    cout<<"Character is: "<<num<<endl;

    //explicit type conversion
    double d = 5.7;
    cout<<"Size of d before conversion is: "<<sizeof(d)<<endl; 
    int x = (int )d + 2;
    cout<<"Value of x is: "<<x<<endl; 
    cout<<"size of x is: "<<sizeof(x)<<endl; 
  
}