#include <iostream>
#include <cstring>
using namespace std;

void replaceAllSpaces(char sentence[])
{
  //int i = 0; 
  int n = strlen(sentence);

  for(int i = 0; i<n; i++){
    if(sentence[i] == ' '){
        sentence[i] = '@';
    }
  }
}

int main()
{

    char sentence[100];
    cout << "Enter sentence: " << endl;

    cin.getline(sentence, 100);

    

    cout << "starting sentence  is: " << sentence << endl;

    replaceAllSpaces(sentence);

    cout << "After Replace Space Array is: " << sentence << endl;

    return 0;
}