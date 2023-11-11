#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int arr[1000];
  int n;

  cout << "Enter the value of n : ";
  cin >> n;
  cout << "Enter the array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> sufix(n);
  sufix[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    sufix[i] = sufix[i + 1] + arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << sufix[i] << " ";
  }
}