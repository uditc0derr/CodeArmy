#include <iostream>
using namespacestd;
int solve(int A[], int n1, int B)
{
    int i, s = 0, e = n1 - 1;
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (A[index] > A[j])
            {
                index = j;
            }
        }
        swap(A[i], A[j]);
    }
    int s1 = 0, e1 = 1;
    while (e1 < n1)
    {
        // substraction equal to B
        if (A[e1] - A[s1] == B)
        {
            return 1;
        }
        else if (A[e1] - A[s1] < B)
        {
            e1++;
        }
        else
        {
            s1++;
        }
    }
    return 0;
}

int main()
{
    int arr[1000];

    int target;
    int n;
    cout << "Enter the value  of n : ";
    cin >> n;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target : ";
    cin >> target;

    int ans = solve(arr, n.target);
    cout << ans;
}