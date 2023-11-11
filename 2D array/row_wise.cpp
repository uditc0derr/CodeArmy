#include <iostream>
using namespace std;
// row wise sum
void printSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3][4];
    cout << "Enter the array : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    printSum(arr, 3, 4);
}