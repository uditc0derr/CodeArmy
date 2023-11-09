#include<iostream>
using namespace std;
 //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
        return -1;
        int start=0,end=0,mid,ans;
        for(int i=0;i<N;i++){
            start = max(start,A[i]);
            end+=A[i];
        }
        while(start<=end){
            mid = start+(end-start)/2;
            int pages =0 ,count=1;
            for(int i=0;i<N;i++){
                pages +=A[i];
                if(pages>mid){
                    count++;
                   // pages = 0;
                    pages = A[i];
                }
            }
            if(count<=M){
                ans = mid ;
                end = mid -1;
            }else{
                start = mid+1;
            }
          
        }
           return ans ; 
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
    

    int M;
    cout<<"Enter the M : ";
    cin>>M;

    int ans  = findPages(arr,n,M);
    cout<<ans;



}