#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 0, 0, 1, 1, 1, 0, 1, 0, 1};
    int size = 10;

    int countZero = 0;
    int countOne = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
    }

    cout<<"No. of Zeros: "<<countZero<<endl;
    cout<<"No. of One: "<<countOne<<endl;
    return 0;
}