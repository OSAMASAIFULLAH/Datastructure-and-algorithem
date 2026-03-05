#include<iostream>
using namespace std;
int fab(int nth){
    if(nth==1){
        return 1;
    }
    if(nth==0){
        return 0;
    }
    int nthresult=fab(nth-1)+fab(nth-2);
    return nthresult;
}
int main(){
    int nth=8;
    int result=fab(nth);
    cout<<"the fab number is"<<result;
}