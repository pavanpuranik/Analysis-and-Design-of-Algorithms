#include <iostream>
using namespace std;

int squareroot(int num)
{
	int start=0,mid,ans;
	int end=num;
	while(start<=end){
		mid=(start+end)/2;
		if(mid*mid==num){
			ans=mid;
			break;
		}
		if(mid*mid<num){
			start=mid+1;
			ans=mid;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
}

int main()
{
	cout<<squareroot(10)<<endl;
	cout<<squareroot(256)<<endl;
	cout<<squareroot(20)<<endl;
	return 0;
}
