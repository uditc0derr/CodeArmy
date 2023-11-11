#include <iostream>
using namespace std;

// first thing to remember is that  we do shifting here

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

    // for(int i=1;i<n;i++){
    //     int temp = arr[i];
    //     int j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[j]>temp){
    //             arr[j+1] = arr[j];
    //         }else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = temp;
    // }

    // for(int i=0;i<n;i++){
    //     int j =i;
    //     while(j>=1 && arr[j]<arr[j-1]){
    //         swap(arr[j],arr[j-1]);
    //         j--;
    //     }
    // }

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}