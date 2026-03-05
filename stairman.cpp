#include<iostream>
using namespace std;
void stair(int n,int &count){
    if(n==1||n==0){
        count++;
        return ;
    }
    stair(n-1,count);
    stair(n-2,count);
}
int main(){
    int n=4;
    int count=0;
    stair(n,count);
    cout<<"the tottal way is"<<count;
}