#include<iostream>
#include<string>
using namespace std;
string reverser(string name,int n,string restring){
    if(n>=4){
       restring.push_back(name[n]);
       return restring;
    }
 restring= reverser(name,n+1,restring);
   restring.push_back(name[n]);
   return restring;
}
int main(){
    string name="usama";
    string rename="";
    int n=0;
    // rename.push_back(name[0]);
    // rename.push_back(name[1]);
  string result= reverser(name,n,rename);
  cout<<"the reverse of name is "<<result<<"and lenght of string is"<<result.length();
}