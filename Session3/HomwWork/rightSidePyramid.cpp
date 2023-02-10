#include<iostream>
using namespace std;

int main() {

    for(int row=2; row>0; row--){
        for(int col = 0; col<=2; col++){
            if(col>=row){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}