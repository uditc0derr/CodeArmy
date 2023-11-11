#include <iostream>
using namespace std;
int main()
{
    int arr[10000];
    int n, maxIndex;
    cout << "Enter the value of  array : ";
    cin >> n;

    // input array
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        // Assume the current element is the maximum
        int maxIndex = i;
        // Find the index of the maximum element in
        // the unsorted part of the array
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        // Swap the maximum element with the last
        // element in the unsorted part
        if (maxIndex != i)
        {
            swap(arr[i], arr[maxIndex]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}