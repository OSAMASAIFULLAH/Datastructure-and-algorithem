#include<iostream>
using namespace std;
int fabonacii(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int result=fabonacii(n-1)+fabonacii(n-2);
    return result;
}
int main(){
    int nth=6;
    int nthterm=fabonacii(nth);
    cout<<"the nth term is "<<nthterm;
}