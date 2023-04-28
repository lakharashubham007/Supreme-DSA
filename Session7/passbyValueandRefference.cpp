#include<iostream>
using namespace std;

// //TODO: PASS BY VALUE APPROACH
// //pass by value concept use here
// //pass by value ke andar copy create hoti hai main variable me change nahi hota hai immidiately
// void inc(int a){
//     cout<<"Inside inc function"<<endl;
//     a++;
//     cout<<"Print Inside inc function"<<endl;
//     cout<<a<<endl;
// }

// int main() {
//  cout<<"I'm in main function: "<<endl;
//  int a = 5;
//  cout<<"call inc function"<<endl;
//  inc(a);
//  cout<<"Comeback to main and Print main function wala a"<<endl;
//  cout<<a<<endl;

//  return 0;
// }


//TODO: PASS BY REFFERENCE
//Refference me main array ke andar direct change hota hai copy nahi banti hai yaha koi 

void increment(int brr[]){
    //Modify array
    for(int i=0; i<3; i++){
        brr[i] = 2*brr[i];
    }
     cout<<"Inside increment function"<<endl;
    //Print arry
    for(int i=0; i<3; i++){
        cout<<brr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[] = { 1,3,5 };
    
    increment(arr);
    cout<<"Inside main function"<<endl;
    //Print arry
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}