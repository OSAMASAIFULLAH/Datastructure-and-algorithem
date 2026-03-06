#include<iostream>
using namespace std;
int binarysearch(int num[],int s,int last,int N){
int mid=(s+last)/2;
if(num[mid]==N){
    return mid;
}
if(num[mid]>N){

binarysearch(num,s,mid,N);
}
else{
    s=mid;
    last=last;
    binarysearch(num,mid,last,N);
}
}

int main(){
    int numbers[]={1,2,3,5,7,9};
    int N=1;
    int start=0;
    int end=5;
    int index=binarysearch(numbers,start,end,N);
  cout<<"the required number is at index "<<index;

}