#include<iostream>
#include<vector>
//program to roatate the matrix 
using namespace std;
int main(){
    int arr[4][4] = {{3,6,4,2},{7,8,11,5},{9,2,12,1},{17,8,5,9}};
    int matrix[4][4];
        

         cout<<"matrix before the rotation "<<endl;
         for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }


        for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    matrix[j][3-i] = arr[i][j];
                }
        }


        cout<<"matrix after the rotation "<<endl;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }


}