#include <iostream>
using namespace std;
int main()
{
    int arr[10000];
    int n;
    cout << "Enter the value  of  n : ";
    cin >> n;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                // index = j;
            }
        }
    }

    cout << "Now the new array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}