#include <iostream>
using namespace std;
int sumOfUnique(int arr[], int nums)
{
    int ans = 0, sum = 0;
    for (int i = 0; i < nums; i++)
    {
        ans = ans ^ arr[i];
        if (ans == 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 23, 4, 1, 1};
    int sum = sumOfUnique(arr, 5);
    cout << sum;
}