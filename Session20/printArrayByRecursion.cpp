#include<iostream>
using namespace std;

void printArrayByRecursion(int arr[], int n , int i){

    //base case
    if( i >= n){
        return;
    }

    //processing
    cout<<arr[i]<<" ";

    //Recursive case
    printArrayByRecursion(arr, n , i+1);

    //processing
    cout<<arr[i]<<" ";
}

int main() {

    int arr[5] = { 10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    printArrayByRecursion(arr, n , i);

    return 0;

}