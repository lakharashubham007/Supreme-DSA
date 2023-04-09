#include<iostream>
using namespace std;

int factorial(int s){


    //base case
    if( s==1 )
    return 1;

  int chotiProblem = factorial(s-1);
  int badiProblem = s * chotiProblem;

  return badiProblem;

}


int main() {

    int n;
    cout<<"Enter a number: "<<endl;

    cin>>n;


    int ans = factorial(n) ;

    cout<<" ans is: "<< ans<< endl;

    return 0;
}