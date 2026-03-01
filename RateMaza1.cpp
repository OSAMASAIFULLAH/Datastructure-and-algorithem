#include<iostream>
#include<vector>
using namespace std;
bool issafe(int newx,int newy,int n,vector<vector<int>>& visited,vector<vector<int>>& m){
if(newx<0||newy<0||newx>n-1||newy>n-1||visited[newx][newy]==1||m[newx][newy]==0){
  return false;
}
return true;
}
void solve(vector<vector<int>>& m,vector<string>& ans,vector<vector<int>>& visited,int x,int y,string path,int n){
    if(x>=n-1&y>=n-1){
      cout<<path<<endl;
     ans.push_back(path);
     return ;
    }
   
    visited[x][y]=1;
//left
  int newx=x;
  int newy=y-1;
   if(issafe( newx,newy, n,visited, m)){
    path.push_back('L');
    solve(m,ans,visited,newx,newy,path,n);
    path.pop_back();
   }
// right
   newx=x;
   newy=y+1;
   if(issafe( newx,newy, n,visited, m)){
    path.push_back('R');
    solve(m,ans,visited,newx,newy,path,n);
    path.pop_back();
   }

// Up
   newx=x-1;
   newy=y;
   if(issafe( newx,newy, n,visited, m)){
    path.push_back('U');
   solve(m,ans,visited,newx,newy,path,n);
     path.pop_back();
   }

//down
   newx=x+1;
   newy=y;
   if(issafe( newx,newy, n,visited, m)){
    path.push_back('D');
    solve(m,ans,visited,newx,newy,path,n);
     path.pop_back();
   }
   visited[x][y]=0;
}
int main(){
    vector<vector<int>> m={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    string path;
    int n=m.size();
    vector<string> ans;
    vector<vector<int>> visited=m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           visited[i][j]=0;
        }
    }
    int x=0;
    int y=0;
    if(m[x][y]==0){
        return 0;
    }

solve(m,ans,visited,x,y,path,n);
for(int k=0;k<ans.size();k++){
   cout<<"i does not run yet"<<endl;
   cout<<ans[k];
}
}