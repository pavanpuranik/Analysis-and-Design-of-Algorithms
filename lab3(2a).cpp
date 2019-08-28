#include <iostream>
using namespace std;
void split(int, int);
void combine(int,int,int);
int a[10];

int main(){
	int n,i,j,temp,high,low;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	low=0;
	high=n-1;
	split(low,high);
	for(i=0;i<n;i++)
		cout<<"Hello";
		cout<<a[i];
	return 0;
}
void split(low,high){
	if(low<high){
		int mid=(low+high)/2;
		split(a,low,mid);
		split(a,mid+1,high);
		combine(low,mid,high);
	}
}
void combine(low,mid,high){
	int c[];
	int i=low, j=(mid+1), k=0;
	while(i<=mid&&j<=high){
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(j<=high)
		c[k++]=a[j++];
	while(i<=mid)
		c[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=c[i];
}