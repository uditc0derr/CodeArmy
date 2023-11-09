#include<iostream>
#include<vector>
//program to print the transpose of the matrix 
using namespace std;
int main(){
    int arr[4][4] = {{3,6,4,2},{7,8,11,5},{9,2,12,1},{17,8,5,9}};
    int matrix[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matrix[j][i] = arr[i][j];
        }
    }

    cout<<"Before transpose  "<<endl;
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After transpose  "<<endl;
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }

   for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
        swap(arr[i][j],arr[j][i]);
    }
   }
   cout<<"Transpose by swapping "<<endl;
     for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}    