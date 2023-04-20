#include <iostream>
using namespace std;

int findMax(int num1, int num2)
{

    int answer;

    if (num1 > num2)
    {
        answer = num1;
    }
    else
    {
        answer = num2;
    }

    return answer;
}

int main()
{

    int num1, num2;
    cin >> num1 >> num2;

    int ans = findMax(num1, num2);
    cout << "Largest numbers is: " << ans << endl;

    return 0;
}