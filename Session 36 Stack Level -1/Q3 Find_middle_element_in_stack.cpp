#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s, int &totalSize){
    //empty case
    if(s.size() == 0){
       cout<<"No element in stack"<<endl;
       return;
    }

   //Base case
   if(totalSize/2+1 == s.size()){
      cout<<"Middle element is: "<<s.top();
      return;
   }

  //operation
  int temp = s.top();
  s.pop();

  //recursive call 
  printMiddle(s,totalSize);

  //Backtrack
  s.push(temp);

    }


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int totalSize = s.size();
    printMiddle(s,totalSize);
    return 0;
}



//  time complexity is O(N) and the 
//  space complexity is O(N) in the worst case, where N is the number of elements in the stack.