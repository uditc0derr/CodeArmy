#include <iostream>
using namespace std;

// function for binary search
int BinarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[1000];
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Enter the Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int ans = BinarySearch(arr, n, key);
    cout << "Index of your key  is " << ans;
}