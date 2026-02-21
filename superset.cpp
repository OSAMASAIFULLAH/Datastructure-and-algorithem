#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> num,int index,vector<int> output,vector<vector<int>> &ans){
    
    if(index>=num.size()){
        ans.push_back(output);
        return ;
    }
    //exclude
    solve(num,index+1,output,ans);
    int element=num[index];
    output.push_back(element);
    //include
    solve(num,index+1,output,ans);

}

int main(){
    vector<int> numbers={1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    
    solve(numbers,index,output,ans);
    cout<<"the supperset of array is"<<endl;
      for ( int i=0;i<ans.size();i++) {
        
        for (int j=0;j<ans[i].size();j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}