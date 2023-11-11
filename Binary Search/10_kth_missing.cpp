#include <iostream>
using namespace std;
int KthElement(int arr[], int n, int k)
{
    int s = 0, e = n - 1, ans = n, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans + k;
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
    int k;
    cout << "Enter the k : ";
    cin >> k;

    int answere = KthElement(arr, n, k);
    cout << "Your missisng number is : " << answere;
}