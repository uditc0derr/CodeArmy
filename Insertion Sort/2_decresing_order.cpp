#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]<temp){
                 arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
          arr[j+1] = temp;
    }

    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}}