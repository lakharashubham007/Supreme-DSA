#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  //int arr[2][2] = {{1,2},{1,2}};
  //cout<<arr[0][1];
 
  int arr[3][4];
  cout<<"enter elements"<<endl;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        cin >> arr[i][j];
    }
}

   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Element at arr[" << i
                 << "][" << j << "]: "; 
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

  return 0;
}