#include<iostream>
using namespace std;


void findMax(int a , int b, int c){
    if(a >= b && a >= c){
        cout<<"Largest Number is: "<<a<<endl;
    }else if( a >= b && b >= c){
        cout<<"Largest Number is: "<<b<<endl;
    }else{
        cout<<"Largest Number is: "<<c<<endl;
    }
}



int main() {

    int a,b,c;
    cin>>a>>b>>c;

   findMax(a,b,c);

   return 0;
}