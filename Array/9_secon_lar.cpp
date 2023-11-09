#include<iostream>
using namespace std;
//second largest element in array
 int print2largest(int arr[], int n) {
	   int ans = -1;
	   for(int i= 0;i<n;i++){
	       
	       if(arr[i]>ans){
	           ans  = arr[i];
	       }
	       
	       int second = -1;
	       for(int i=0;i<n;i++){
	           if(arr[i]!=ans){
	               second = max(second,arr[i]);
	           }
	       }
	       return second;
	   }
	    
    }
int main(){
   int arr[5] = {1,2,3,4,5};
   int index = print2largest(arr,5);
   cout<<index;
}
