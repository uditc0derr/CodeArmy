#include <iostream>
using namespace std;
int main()
{
    int target;
    cout << "Enter the target : ";
    cin >> target;
    int ans;
    int arr[7] = {1, 5, 14, 20, 14, 10, 41};
    int s = 0, e = 6;
    while (s <= e)
    {
        if (arr[s] + arr[e] == target)
        {
            ans = 1;
        }
        else if (arr[s] + arr[e] < target)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    cout << ans;
}