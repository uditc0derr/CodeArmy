#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

//lagest sum of contigous subarray 
int kadane(int arr[],int n){
   int maxi= INT_MIN,prefix = 0;
       for(int i=0;i<n;i++){
           prefix  += arr[i];
       
       maxi = max(maxi,prefix);
       if(prefix<0){
           prefix = 0;
       } 
       }
       return maxi;
}
int main(){
int arr[1000];
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = kadane(arr,n);
    cout<<"Maximum sum of contigous subarray is : "<<ans;
}