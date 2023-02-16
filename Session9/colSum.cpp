#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printRowSum(int arr[][4], int row, int col ){
    cout<<"Printing the sum of array"<<endl;
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main() {
  //int arr[2][2] = {{1,2},{1,2}};
  //cout<<arr[0][1];
 
  int arr[3][4];

  int row = 3;
  int col = 4;
  cout<<"enter elements"<<endl;
for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
}

cout<<"Printing 2d Array"<<endl;

   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            /* cout << "Element at arr[" << i
                 << "][" << j << "]: ";  */
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowSum(arr, row, col);

  return 0;
}