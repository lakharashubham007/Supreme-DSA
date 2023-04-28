#include<iostream>
using namespace std;

void linearSearch(int nums[], int size, int target){
    for(int i=0; i<size; i++){
    if(nums[i] == target){
        cout<<"element at index "<<i<<" is "<<nums[i]<<" Target Found"<<endl;
    }else{
        cout<<"element at index "<<i<<" is "<<nums[i]<<" Target Not Found"<<endl;
    }
    }
}

int main() {
 int nums[] = { 1 ,2 ,3 ,4 ,3, 6 };
 int size = 6;
 int  target = 3;
 
 linearSearch(nums, size , target);

 return 0;
}