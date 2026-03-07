#include<iostream>
using namespace std;
void binarysearch(int num[],int s,int last,int N){
    if(s>last){
        cout<<"value not fount";
        return ;
    }
int mid=(s+last)/2;
if(num[mid]==N){
    cout<<"the value is at index "<<mid;
    return ;
}
if(num[mid]>N){

binarysearch(num,s,mid-1,N);
}
else{
    s=mid;
    last=last;
    binarysearch(num,mid+1,last,N);
}
}

int main(){
    int numbers[]={1,2,3,5,7,9};
    int N=10;
    int start=0;
    int end=5;
    binarysearch(numbers,start,end,N);
//   cout<<"the required number is at index "<<index;

}