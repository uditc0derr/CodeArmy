#include<iostream>
using namespace std;
  int missingNumber( int array[], int n) {
      int  sum =0;
      for(int i=0;i<n-1;i++){
          sum = sum + array[i];
      }
      int ans = n*(n+1)/2;
       return ans-sum;
   
    }
    
int main(){
    int arr[6] = {1,2,3,5,6};
    int ans = missingNumber(arr,6);
    cout<<ans;
}