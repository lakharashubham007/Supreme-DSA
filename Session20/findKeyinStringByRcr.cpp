#include<iostream>
using namespace std;


bool checkKey(string str, int i, int n,char key){
    //base case
    if( i >= n)
        return false;
    

    //handle 1 case
    if(str[i] == key)
        return true;
    
    
    
    //recursive call
    return  checkKey(str, i+1, n , key);
    
    
    //bool ans =   checkKey(str, i+1, n , key);

    //return ans;
}



int main() {


    string str = "shubhamlakhara";

    int  n = str.length();

    int i = 0;

    char key = 'z';

    bool ans = checkKey(str, i, n, key);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}