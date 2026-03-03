#include<iostream>
using namespace std;
int factorial(int n){
    // if(n<=1){
    //     return n;
    // }
// int fact=n*factorial(n-1);
return n;
}
int main(){
    int n=4;
    int result=n*factorial(n-1);
    // int result=factorial(n);
    cout<<"the factorial of "<<n<<" is "<<result;
}