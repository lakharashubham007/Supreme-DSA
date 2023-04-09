#include <iostream>
using namespace std;


int main() {

    //char name[100];
    
    //cout<<"Enter your name "<<endl;
    
    //  name[0] = 'B';
    //  name[1] = 'h';
    //  name[2] = 'a';
    //  name[3] = 'w';
    //  name[4] = 'l';
    //  name[5] = 'i';


    //cin >> name;

    //cout<<"Aapka naam: "<< name <<" hai " <<endl;

    //cout<<"My dear is into character array: " << name[0] <<name[1]<<name[2]<<name[3]<<name[4]<<name[5]<<endl;
    

    char name[100];
    cout<<"Enter Your name: "<<endl;
    cin >> name;

    for(int i=0; i<7; i++){
        cout<<"index: "<< i << " value: "<<name[i]<<endl;
    }


   //Find value at index ASCCI VALUE IF CHARACTER AVAILBLE

   int value = (int)name[0];
   cout<<"value is: "<< value <<endl;

    return 0;
}