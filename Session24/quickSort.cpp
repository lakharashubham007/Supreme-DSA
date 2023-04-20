#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // step 1 Choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2 Find right postition of pivot elemnt and place it in right position
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    // jab loop se bahar aa jayeg ta right index pivot elment ka mil jayega
     //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // Step 3 chote and bade sort karwao   //Step3: left me chote and right me bade
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }
        // 2 case ho sakte h ->
        // A-> you found the elements to swap
        // B-> no need to swap
        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i], arr[j]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // inavalid array
    // base case
    if (s >= e)
        return;

    // partioning logic, return pivot Index
    int p = partition(arr, s, e);

    // recursive call
    //  left side array sorting
    quickSort(arr, s, p - 1);

    // recursive call
    // right side array sorting
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 50, 50, 50, 50, 5, 1, 1, 1, 1, 2, 2, 2, 50, 30};
    int n = 20;

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}