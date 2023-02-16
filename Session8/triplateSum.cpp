#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{10, 20, 30, 40, 15, 25, 5};
    int sum = 50;

    for (int i = 0; i < arr.size(); i++)
    {
        int elem1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int elem2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                int elem3 = arr[k];

                if (elem1 + elem2 + elem3 == sum)
                {
                    cout << elem1 << "," << elem2 << "," << elem3 << endl;
                }
            }
        }
    }
}