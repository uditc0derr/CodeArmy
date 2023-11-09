#include<iostream>
using namespace std;
//searching element 
bool isPresent(int arr[][4],int target ,int row,int col){
    for(int col=0;col<3;col++){
        for(int row=0;row<4;row++){
           if(arr[row][col]==target)
{
    return 1;
}        }
    }
return 0;
}
int main(){
      int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
      int target;
        cout<<"enter the target : ";
    cin>>target;

     if(isPresent(arr,target,3,4)){
        cout<<"Found ";
     }else{
        cout<<"not found ";
     }
}