#include<iostream>
using namespace std ;
//binary search in 2d array 
int main(){
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    int n = 5;
    int x ;
    cout<<"Enter the value of x : ";
    cin>>x;
    int flag = 0;
    for(int i=0;i<4;i++){
if(arr[i][0]<=x&&x<=arr[i][4]){
    int s = 0,e =4;
    while(s<=e){
     int   mid = s+(e-s)/2;
        if(arr[i][mid]==x ){
            flag = 1;
            break;

        }else if(arr[i][mid]<x){
            s = mid + 1;
    
        }else{
            e = mid -1;;
        }
       
    }
}
    }

    if(flag==1){
        cout<<"Element found ";
    }else{
        cout<<"Element does not found ";
    }
}
