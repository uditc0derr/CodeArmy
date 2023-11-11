#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[1000];
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> prefix(n);
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
}