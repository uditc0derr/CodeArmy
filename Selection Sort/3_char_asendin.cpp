//sorting a char array 
#include<iostream>
using namespace std;
int main(){
    char arr[10000];
    int n,index ;
    cout<<"Enter the value of  n : ";
    cin>>n;
    
    //input array 
    cout<<"Enter the array in character form : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection sort 

    for(int i=0;i<n-1;i++){
        index  = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }      
        }
        swap(arr[i],arr[index]);
    }

     cout<<"Now the character array is  : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

    
}