#include <iostream>
#include <cstring>
using namespace std;


int getLength(char name[]){

    int length = 0;
     int i=0;

     while(name[i] != '\0'){
        length++;
        i++;
     }
     return length;
}


int main(){
    char name[100];
     cout<<"Enter Your name: "<<endl;

    //cin>> name; //--space tak hi read karega

    cin.getline(name,100); //space ko bhi read kar lega
    
    
    cout<<"Return the length of array: "<< getLength(name) <<endl;
    
    //Predefine function in c++ for length
    cout<<"Length is :->  "<<strlen(name)<<endl;

    return 0;

}