#include <iostream>
using namespace std;
int main()
{
    string s = "nitin";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "Not a pallindrome";
            return 0;
        }
        start++, end--;
    }
    cout << "It is pallindrome";
}