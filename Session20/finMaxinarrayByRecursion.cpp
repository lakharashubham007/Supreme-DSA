#include<iostream>
#include<limits.h>
using namespace std;

void findMaxByRcr(int arr[], int n, int i, int& maxi){

    //base case
    if( i >= n){
        return;
    }

    if(arr[i] > maxi){
        maxi = arr[i];
    }

    findMaxByRcr(arr, n, i+1, maxi);
}


void findMinByRcr(int arr[], int n, int i, int& mini){

    //base case
    if( i >= n){
        return;
    }

    mini = min(mini, arr[i]);

    findMinByRcr(arr, n, i+1, mini);
}





int main() {

    int arr[] = { 100 ,2 ,5 ,8, 99, 7, 3, 1};
    int n = 8;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;

    findMaxByRcr(arr, n , i , maxi);
    findMinByRcr(arr, n , i , mini);
    cout<<"Maximum number is: "<<maxi<<endl;
    cout<<"Minimum number is: "<<mini<<endl;
}