#include<iostream>
#include<vector>
using namespace std;
bool issafe(int newx,int newy,int n,vector<vector<int>>& visited,vector<vector<int>>& m){
   cout<<"safe saab i am running"<<endl;
if(newx<0||newy<0||newx>n||newx>n||visited[newx][newy]==1||m[newx][newy]==0){
  return false;
}
return true;
}
void solve(vector<vector<int>>& m,vector<string>& ans,vector<vector<int>>& visited,int x,int y,string path,int n){
    if(x>m.size()&y>=m.size()){
     ans.push_back(path);
     return ;
    }
   
    visited[x][y]=1;
//left
  int newx=x;
  int newy=y-1;
   if(issafe( newx,newy, n,visited, m)){
   cout<<"i am run on condition"<<endl;
//     path.push_back('L');
//     solve(m,ans,visited,newx,newy,path,n);
//     path.pop_back();
   }}
//right
   // newx=x;
   // newy=y+1;
   // if(issafe( newx,newy, n,visited, m)){
   //  path.push_back('R');
   //  solve(m,ans,visited,newx,newy,path,n);
   //  path.pop_back();
   // }
//Up
   // newx=x-1;
   // newy=y;
   // if(issafe( newx,newy, n,visited, m)){
   //  path.push_back('U');
   // solve(m,ans,visited,newx,newy,path,n);
   //   path.pop_back();
   // }
//down
   // newx=x+1;
   // newy=y;
   // if(issafe( newx,newy, n,visited, m)){
   //  path.push_back('D');
   //  solve(m,ans,visited,newx,newy,path,n);
   //   path.pop_back();
   // }
   // visited[x][y]=0;
// }
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
        cout<<"the gate are block";
        return 0;
    }

solve(m,ans,visited,x,y,path,n);
}