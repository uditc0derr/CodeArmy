#include<iostream>
using namespace std;
int main(){
    int n,sum=0,avg;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];

    //input array 
    cout<<"Enter the array  : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    //size of array 
    int size = sizeof(arr)/sizeof(arr[0]);
    
    avg = sum/size;
    cout<<"Average of array : "<<avg;

}