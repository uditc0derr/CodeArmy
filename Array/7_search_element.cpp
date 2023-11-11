#include <iostream>
using namespace std;
int main()
{
    int key, index = -1;
    cout << "Enter the key : ";
    cin >> key;
    int arr[6] = {10, 20, 7, 11, 6, 7};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }
    cout << "Your value is at index of : " << index;
}