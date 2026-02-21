#include<iostream>
#include<vector>
using namespace std;
void combi_fun(vector<string> key,int i,vector<string>& output,vector<vector<string>>& result,vector<int>& num){
int num1=num[0];
int num2=num[1];
string item1=key[num1];
string item2=key[num2];
string val="";
val+=item1[i];
if(i>=3){
    result.push_back(output);
    return ;
}
for(int j=0;j<3;j++){
    val+=item2[j];
    output.push_back(val);
    val.pop_back();
  
}
val="";
combi_fun(key,i+1,output,result,num);
}
int main(){
    vector<string> keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<vector<string>> combination;
    int index=0;
    vector<string> output;
    vector<int> numbers={2,3};
   combi_fun(keys,index,output,combination,numbers);
   for(int i=0;i<combination.size();i++){
    for(int j=0;j<combination[i].size();j++){
        cout<<combination[i][j]<<",,";
    }
   }

}