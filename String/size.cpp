#include<iostream>
using namespace std;
//size finder without actually using size function
int main(){
    string s = "Nitin";
    int size = 0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<"Size of the string "<<size;
}