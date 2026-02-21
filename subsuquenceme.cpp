#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> str={"a","b","c"};
    int n=str.size();
    int total=1<<n;
    for(int mask=0;mask<total;mask++){
        for(int j=0;j<n;j++){
            if(mask&(1<<j)){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
}