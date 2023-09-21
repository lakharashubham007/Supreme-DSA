#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main(){
//creation queue
queue<int> q;
//insertion 
q.push(5);
q.push(15);
q.push(25);
q.push(35);
//size
cout<<"size of queue is : "<<q.size()<<endl;

//removal
q.pop();

cout<<"size of queue is : "<<q.size()<<endl;

//Check empty
if(q.empty()){
    cout<<"Q is empty"<<endl;
}else {
    cout<<"Q is not empty"<<endl;
}

//Check First or Front Elemenet
cout<<"First Element is: "<<q.front()<<endl;

return 0;

}