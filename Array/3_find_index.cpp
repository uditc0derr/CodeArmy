#include<iostream>
using namespace std;
int main(){
    int key ;
    cout<<"Enter the key : ";
    cin>>key;
    int size = 5;
    int arr[size]={1,2,3,4,5};
       for(int i=1;i<=size;i++){
        if(key==arr[i]){
            cout<<i;
        }else{
            return -1;
        }
       }
    

}