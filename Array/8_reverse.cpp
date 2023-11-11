#include <iostream>
using namespace std;
// reverse array
int main()
{
    int arr[6] = {1, 23, 4, 5, 6, 67};
    int i = 0, j = 5;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Now the reverse array is : ";
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
}