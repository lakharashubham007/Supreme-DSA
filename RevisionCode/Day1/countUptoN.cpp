#include<iostream>
using namespace std;

void printUptoNnumbers(int value){
   
   cout<<value<<endl;

    for(int i=1; i<=value; i++){
        cout<<i<<endl;
    }

}

int main() {

  int value;
  cin>>value;
   
  printUptoNnumbers(value);

  return 0;


}