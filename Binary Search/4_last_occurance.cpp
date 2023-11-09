#include<iostream>
using namespace std;
int LastOcuur(int arr[],int n,int key){
    int s=0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==key){
          ans =  mid;
            s = mid + 1;
            
        }
        else if(arr[mid]>key){
            e = mid -1;
        }else if(arr[mid]<key){
            s  = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key : ";
    cin>>key;

    int ans = LastOcuur(arr,n,key);
    cout<<"Last index of your number is : "<<ans;
}