#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, mult = 1, r;
    cout << "Enter the binary number : ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum = r * mult + sum;
        n = n / 10;
        mult = mult * 2;
    }
    cout << "Decimal number of your number : " << sum;
}