#include<iostream>
using namespace std;
int test2(int n){
    if(n==1){
        return 1;
    }
}
int test1(int n){
 return test2(n);
}
int main(){
    int n=2;
   int n2= test1(n);
   cout<<n2;
}