#include<iostream>
using namespace std;
int PeakMountain(int arr[],int n){
     int s =0,e=n-1,mid;
               
        while(s<=e){
            mid = s+(e-s)/2;
            //peak element 
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
               //right side move           
               else if(arr[mid]>arr[mid-1]){
                   s = mid +1 ;
               } else{
                   e = mid ;
               }
            
        }
        return -1;
    }

int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int ans = PeakMountain(arr,n);
    cout<<"Peak value is at index of : "<<ans;

}