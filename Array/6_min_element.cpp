#include <iostream>
using namespace std;
// it is progarm to print the minimum element in array
int main()
{
    int arr[5] = {12, 23, 44, 543, 1};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum element in the array is : " << min;
}