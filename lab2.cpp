#include<iostream>
using namespace std;
class Max
{
	int n,a[10],i,largest;
	public:void getdata(){
		cout<<"Enter the number of elements";
		cin>>n;
		cout<<"Enter array elements";
		for(i=0;i<n;i++)
			cin>>a[i];
	}
	void calculate(){
		largest=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>largest)
				largest=a[i];
		}
		cout<<"The largest number is "<<largest;
	}
};
int main()
{
	Max m;
	m.getdata();
	m.calculate();
	return 0;
}