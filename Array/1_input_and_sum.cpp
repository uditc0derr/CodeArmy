//progarm to print the sum of  array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n  : " ;
    cin>>n;
    
    //intialise value of array 
    int arr[n];
    int sum = 0;

    //input array
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum  = sum +arr[i];
    }
    cout<<"Sum of array  is : "<<sum;
}