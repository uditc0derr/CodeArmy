#include<iostream>
#include<vector>
using namespace std;
int main(){
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
cout<<*std::find(ans.begin(),ans.end(),57)-ans.begin()<<endl;

 
}
