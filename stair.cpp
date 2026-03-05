#include<iostream>
using namespace std;
int stair(int n,int count){
    if(n<=1){
        return count;
    }
    
  int result=stair(n-1,count+1)+stair(n-2,count+1);
  return result;
}
int main(){
    int n=3;
    int count=1;
int ways=stair(n,count);
cout<<"the tottal ways are"<<ways;
}