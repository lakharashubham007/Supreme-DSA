#include <iostream>
#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

//get max in 2d Arrays
int getMax(int arr[][4], int row, int col){
    int maxi = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(maxi < arr[i][j]){
                maxi = arr[i][j]; 
            }
        }
    }
    return maxi;
}

//get min in 1d array
int getMin(int arr[][4], int row, int col){
    int mini = INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mini > arr[i][j]){
                mini = arr[i][j]; 
            }
        }
    }
    return mini;
}


int main() {

  int arr[3][4];

  int row = 3;
  int col = 4;
  cout<<"enter elements"<<endl;
for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
}

/* cout<<"Printing 2d Array"<<endl;

   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            /* cout << "Element at arr[" << i
                 << "][" << j << "]: ";  
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    } */

cout<<"Max element is: "<<getMax(arr, row, col)<<endl;
cout<<"Min element is: "<<getMin(arr, row, col)<<endl;

  return 0;

}