#include<iostream>
using namespace std;
#include<limits.h>

int main() {

    int arr[] = { 8, 7, 502, 6, 13, };
    int size = 5;

    int maxNum = INT_MIN;

    for(int i=0; i<size; i++){
     if(arr[i] > maxNum){
        maxNum = arr[i];
     }
    }
    cout<<"Maximum number is: "<<maxNum<<endl;
    return 0;
}