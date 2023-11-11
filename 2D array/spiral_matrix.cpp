#include <iostream>
#include <vector>
// program to print the spiral of the matrix
using namespace std;
int main()
{
    int arr[4][4] = {{3, 6, 4, 2}, {7, 8, 11, 5}, {9, 2, 12, 1}, {17, 8, 5, 9}};

    int top = 0, left = 0, bottom = 3, right = 3;
    while (top <= bottom && left <= right)
    {

        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bottom)
            for (int j = right; j >= left; j--)
            {
                cout << arr[bottom][j] << " ";
            }
        bottom--;

        if (left <= right)
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
        left++;
    }
}
