#include <iostream>
using namespace std;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}