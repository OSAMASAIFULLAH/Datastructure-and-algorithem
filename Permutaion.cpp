#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& num,vector<vector<int>>& ans,int index){
    if(index>=num.size()){
        ans.push_back(num);
        return ;
    }
    for(int j=index;j<num.size();j++){
        swap(num[index],num[j]);
        solve(num,ans,index+1);
        swap(num[j],num[index]);

    }
}
int main(){
    vector<int> num={1,2,3};
    vector<vector<int>> ans;
    int index=0;
    solve(num,ans,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
        cout<<endl;
    }
}