#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    //input the array 
    cout<<"Enter the array : "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //bubble sort 
    for(int i=n-2;i>=0;i--){
        bool swapped = 0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped  = 1;
            }
            if(swapped==0){
                break;
            }
        }
    }


    //printing array 
    for(int  i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




//---------------------------------------OR--------------------------------------------------



    // void bubbleSort(vector<int>& arr, int n)
// {   
//     for(int i=0; i<n; i++){
//         // for round 1 to n-1
        
//         bool swapped = false;
        
//         for(int j=0; j<n-i; j++){
               //becuse last element will bbe sorted 
//             //process element till n-i th index
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }   
//         }
//         if(swapped == false)
//             //already sorted
//             break;
//     }
// }



}