#include<iostream>
using namespace std;
void fabonacci(int x,int y,int n,int i){
    if(i>=n){
     return ;
    }
   int fab=x+y;
   x=y;
   cout<<"the fabonacci numbers are"<<fab<<endl;
   y=fab;
   fabonacci(x,y,n,i+1);
}
int main(){
    int x=0;
    int y=1;
    int n=5;
    int i=0;
fabonacci(x,y,n,i);
}