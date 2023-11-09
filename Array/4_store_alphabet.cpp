#include<iostream>
using namespace std;
int main(){
    int size = 26;
    char arr[26];
    cout<<"Enter the character : ";
    for(int i=1;i<=size;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
}