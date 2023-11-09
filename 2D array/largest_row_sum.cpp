#include<iostream>
#include<climits>
using namespace std;
//row wise sum
int LargestRowSum(int arr[][4],int row ,int col){
    int maxi = -17356;
    int rowIndex = -1;
     for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
           sum +=arr[i][j];
        }
       if(sum>maxi){
        maxi = sum;
        rowIndex = i;
       }
    }
    cout<<"The maximim sum is "<<maxi<<endl;
    return rowIndex;
}
int main(){
    int arr[3][4];
    cout<<"Enter the array : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

   int ansIndex = LargestRowSum(arr,3,4);
   cout<<ansIndex;

}