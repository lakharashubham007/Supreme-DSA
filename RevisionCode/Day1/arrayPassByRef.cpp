#include<iostream>
using namespace std;


void printArray(int arr[]) {
   
   for(int i=0; i<3; i++){
    cout<<arr[i]<<" ";
   }

}

void incArray(int arr[]) {
    arr[0] = arr[0] + 10;
    printArray(arr);
}


int main() {

 int arr[] = { 1 , 2, 4 };

 incArray(arr);

 printArray(arr);

 return 0;
}