#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 0, 1, 0, 1, 0, 1};
    int s = 0, e = 6;
    while (s <= e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else
        {
            e--;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}