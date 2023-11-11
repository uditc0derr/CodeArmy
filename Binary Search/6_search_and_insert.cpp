#include <iostream>
using namespace std;
int SeachInsert(int nums[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s;
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int ans = SeachInsert(arr, 5, 1);
    cout << ans;
}