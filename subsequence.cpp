#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subsequence(vector<string> str,int index,vector<string> output,vector<vector<string>>& ans){
 if(index>=str.size()){
    ans.push_back(output);
    return ;
 }
 subsequence(str,index+1,output,ans);
 string element=str[index];
 output.push_back(element);
 subsequence(str,index+1,output,ans);
}
int main(){
   vector<string> str={"a","b","c"};
   vector<vector<string>> ans;
   int index=0;
   vector<string> output;
   subsequence(str,index,output,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}