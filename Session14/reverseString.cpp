#include <iostream>
#include <cstring>
using namespace std;

void reverseCharArray(char name[])
{

    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main()
{

    char name[100];
    cout << "Enter name: " << endl;

    // cin.getline(name, 100);

    cin >> name;

    cout << "starting array name is: " << name << endl;

    reverseCharArray(name);

    cout << "After Reverse Array is: " << name << endl;

    return 0;
}