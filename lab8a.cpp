#include <stdio.h>
#include <iostream>

using namespace std;

int max(int a,int b){
    return (a>b)?a:b;
}
bool checkmaxheap(int a[],int n){
    int i;
    int flag=0;
    for(i=0;i<n/2-1;i++){
        if((2*i+1)>n)
            break;
        else if(a[i]>=max(a[2*i],a[2*i+1]))
            continue;
        else
            flag=1;
            break;
    }
    if(flag==1)
        return false;
    else
        return true;
}

int main(){
    int a[]={90,15,10,7,12,2};
    int n=6;
    cout<<checkmaxheap(a,n);
}