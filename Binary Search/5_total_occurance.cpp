#include <iostream>
using namespace std;
// first occurance
int FirstOcuur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}
// last occurance
int LastOcuur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{

    int arr[100];
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int first = FirstOcuur(arr, n, key);
    int last = LastOcuur(arr, n, key);
    int TotalOccurance = last - first + 1;
    cout << "Total number of your key is : " << TotalOccurance;
}