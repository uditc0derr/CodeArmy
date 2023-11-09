#include<iostream>
#include<strings.h>
using namespace std ;
int main(){
    //string declare 
    //\0 is a null charcter
   // string s = "Udit";
   // cout<<s;
   string s ;
   cout<<"Enter the string : ";
   //cin>>s;//it will take input untill space or enter  or tab comes 
    getline(cin,s);//it will work untill enter come 
    //size
    cout<<"Size of string is : "<<s.size()<<endl;

  cout<<s<<endl;
  //adding a value in last element 
  s.push_back('p');
  cout<<s<<endl;
  s.pop_back();
  cout<<s<<endl;

    //escape character ---> \ <--- 
    string a = "Udit is \"good\" boy";
    cout<<a;
    string b = "\0";//it is a null character 
    cout<<b;

  
}