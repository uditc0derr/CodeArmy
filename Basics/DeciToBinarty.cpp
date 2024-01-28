#include <iostream>
using namespace std;
int main()
{
    int n, temp, r, sum = 0, mult = 1;
    cout << "Enter the n : ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 2;
        sum = r * mult + sum;
        mult = mult * 10;
        n = n / 2;
    }
    cout << "Binary number of " << temp << " is : " << sum;
}