#include <iostream>
using namespace std;
int SearchElementRotated(int nums[], int n, int target)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        // I find my element
        if (nums[mid] == target)
        {
            return mid;
        }
        // Left side sorted

        else if (nums[mid] >= nums[0])
        {
            if (nums[s] <= target && nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        else
        {
            // Right Side Sorted
            if (nums[mid] < target && nums[e] >= target)
            {
                s = mid + 1;
            }
            else
                e = mid - 1;
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

    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key : ";
    cin >> key;

    int ans = SearchElementRotated(arr, n, key);
    cout << "Your ans is at Index of : " << ans;
    ;
}