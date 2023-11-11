#include <iostream>
using namespace std;
int main()
{

    int arr[2000];
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // input aaray
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // buuble sort
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; i <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }

        cout << "Now the swapped array  is : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
