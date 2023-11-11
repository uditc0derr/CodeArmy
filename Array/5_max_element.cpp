#include <iostream>
using namespace std;
int main()
{
    int max;
    int arr[] = {43, 4, 5, 3, 46, 4321, 143, 33};
    max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i <= size; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
}