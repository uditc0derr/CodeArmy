#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr){
    int n,prefix=0,total_sum=0;
    n= arr.size();
    for(int i=0;i<n;i++){
        total_sum +=arr[i];
        for(int i=0;i<n;i++){
            prefix += arr[i];
        }
        if(total_sum==2*prefix){
            return 1;
        }

    }


}
int main(){
    // int arr[1000];
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // cout<<"Enter the array : ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n-1;i++){
    //     int sum1 = 0,sum2=0;
    //     for(int j=0;j<=i;j++){
    //         sum1 +=arr[j];
    //     }
    //     for(intj=i+1;j<n;j++){
    //         sum2+=arr[j];
    //     }if(sum1 == sum2){
    //         cout<<1;
    //     }
    // }

    //-------------------------OR----------------

    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the array : ";
    for(int  i=0;i<n;i++){
        cin>>v[i];
       
    }
     cout<<divide(v);


}