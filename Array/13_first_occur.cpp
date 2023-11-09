#include<iostream>
using namespace std;
 int firstRepeated(int arr[], int n) {
        int ans =-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;i++){
            if(arr[i]==arr[j]){
               ans = arr[i];
            }
        }
        
    }
    return ans;
    }
int main(){
    int arr[5] = {1,1,2,3,4};
    int index = firstRepeated(arr,5);
    cout<<index;
}