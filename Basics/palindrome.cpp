#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum = 0, r;
    cout << "Enter the value of n : ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Palindrome Number ";
    }
    else
    {
        cout << "Not palindrome Number ";
    }
}