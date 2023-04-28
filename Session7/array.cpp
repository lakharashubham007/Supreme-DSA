#include <iostream>
#include <bits/stdc++.h>
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

    // TODO: print double in given array
    int drr[500];

    int n;
    cout << "Enter the number of element you want" << endl;
    cin >> n;
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> drr[i];
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << 2 * drr[i] << " ";
    }
    cout << endl;

    // TODO: Set all array elemet to the one

    int array[5] = {1, 2, 3, 4, 5};
    cout << "All element overwride" << endl;

    for (int i = 0; i < 5; i++)
    {
        array[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // TODO: MEMSET
    int nums[5];
    cout << "MEMSET used" << endl;
    
    memset(nums, 0, sizeof(nums));
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
   

    cout << "Suceessfully created!" << endl;

    return 0;
}