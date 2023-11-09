#include<iostream>
using namespace std;
//reverse the string 
int main(){
    string s = "Nitin";
    int start = 0,end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s;
}