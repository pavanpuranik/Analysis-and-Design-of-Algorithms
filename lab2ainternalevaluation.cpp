#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,loc,temp,min,a[30],k;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
	
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
	cout<<"Enter the value of k";
	cin>>k;
 
    for(i=0;i<k;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
 
    
	cout<<a[k-1]<<endl;
 
    return 0;
}