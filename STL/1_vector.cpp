#include<iostream>
#include<vector>
using namespace std;
int main(){
//     //intialise
//     vector<int>v1(5,1);

// //create vector ,declare 
// vector<int>v;


// //size and capacity 

// cout<<"Size of v : "<<v.size()<<endl;
// cout<<"Capacity of v : "<<v.capacity()<<endl;

// v.push_back(2);
// v.push_back(3);
// v.push_back(10);
// cout<<"Size of v : "<<v.size()<<endl;
// cout<<"Capacity of v : "<<v.capacity()<<endl;


// //update value 
// v[1]=5;

// cout<<"Size of v1 : "<<v1.size()<<endl;
// cout<<"Capacity of v1 : "<<v1.capacity()<<endl;

// v1.push_back(8);
// cout<<"Size of v1 : "<<v1.size()<<endl;
// cout<<"Capacity of v1 : "<<v1.capacity()<<endl;

// vector<int>v3= {1,2,34,5,6,7};

//delete value from the vector 
// vector<int>vnew;
// vnew.push_back(4);
// vnew.push_back(14);
// vnew.push_back(24);
// vnew.push_back(34);
// vnew.push_back(44);
// vnew.pop_back();
// cout<<"Size of vnew : "<<vnew.size()<<endl;
// cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;

// vnew.erase(vnew.begin()+2);
// cout<<"Size of vnew : "<<vnew.size()<<endl;
// cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;

// //printing
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// cout<<endl;

// //insert value 
// vnew.insert(vnew.begin()+1,50);
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// cout<<endl;

// vnew[2] = 37;
// for(int i=0;i<vnew.size();i++){
//     cout<<vnew[i]<<" ";
// }
// cout<<endl;

// //clear all the element 
// vnew.clear();
// cout<<"Size of vnew : "<<vnew.size()<<endl;
// cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;


// vector<int>arr;
// arr.push_back(2);
// arr.push_back(21);
// arr.push_back(23);
// arr.push_back(25);
// arr.push_back(42);

// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

// vector<int>a;

// //copy all the value of arr in a 
//  a = arr;
//  cout<<a.size()<<endl;

//  //printing 
//  for(auto i:arr){
//     cout<<i<<" ";
//  }
//  cout<<endl;
// //printing 
//  for(auto it =arr.begin() ;it != arr.end();it++){
//     cout<<*it<<" ";
//  }
//  cout<<endl;


vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(51);
ans.push_back(45);
ans.push_back(57);

// //sort in increasing order 
// sort(ans.begin(),ans.end());
// for(int i=0;i<=ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;

// //sort in decresing order 
// sort(ans.begin(),ans.end(),greater<int>())
// for(int i=0;i<=ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;

// sort(ans.rbegin(),ans.rend());
// for(int i=0;i<=ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;



//serach in binary search 

// cout<<binary_search(ans.begin(),ans.end(),57)<<endl;

//find 
cout<<find(ans.begin(),ans.end(),57)<<endl;

 



}