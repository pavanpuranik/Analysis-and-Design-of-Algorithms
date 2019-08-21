#include<iostream>
using namespace std;
int main()
{
	
	int n, i, arr[50], j, temp, k;
	cout<<"Enter total number of elements";
	cin>>n;
	cout<<"Enter numbers";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter k";
	cin>>k;
	
	for(i=0; i<k-1; i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=n-1; i>=n-k; i--)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}