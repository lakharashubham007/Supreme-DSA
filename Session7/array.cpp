#include <iostream>
using namespace std;

int main()
{

    // TODO: declare array
    int arr[100];

    // TODO: initialise array
    int brr[] = {1, 2, 3, 4, 5};

    // TODO: aceess random array eleemnt
    // by indexing concept
    cout << brr[3] << " " << brr[0] << " " << brr[2] << endl;

    // TODO: how to print element
    // print array
    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    // TODO: static input array element
    int crr[5];
    cout << "Enter the array element" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> crr[i];
    }

    // print array
    for (int i = 0; i < 5; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    cout << "Suceessfully created!" << endl;
}