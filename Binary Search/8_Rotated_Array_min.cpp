#include <iostream>
using namespace std;
int MinRotated(int nums[], int n)
{
    int s = 0, e = n - 1, ans = nums[0];
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // left side sorted
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        // Right side sorted array
        else
        {
            ans = nums[mid];
            e = mid - 1;
        }
    }
    return ans;
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

    int ans = MinRotated(arr, n);
    cout << "Minimum Element is : " << ans;
}