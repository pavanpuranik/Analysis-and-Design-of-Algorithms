#include <iostream>
using namespace std;
int arr[10],count1=0;
void bubbleSort(int);
void selectionSort(int);
void merge_sort(int, int, int);
void merge_array(int, int, int, int, int);

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	bubbleSort(n);
	cout<<endl;
	selectionSort(n);
	merge_sort(0,n-1,n);
	for(i=0;i<n;i++)
		cout<<arr[i];
    
	cout<<count1;
	return 0;
}
void bubbleSort(int n){
	int i,j,temp,count=0;
	for(i=0;i<n;i++){
		
		for(j=0;j<n-i-1;j++){
			count++;
			if(arr[j]>arr[j+1]){
				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
		cout<<arr[i];
	cout<<"\n"<<count;
}
void selectionSort(int n){
	int i,j,temp,min,loc,count=0;
	for(i=0;i<n;i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
			count++;
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
	for(i=0;i<n;i++)
		cout<<arr[i];
	cout<<"\n"<<count;
}

void merge_sort(int i, int j,int n) {
    int m;

    if (i < j) {
        m = (i + j) / 2;
        merge_sort(i, m, n);
        merge_sort(m + 1, j, n);
    
        merge_array(i, m, m + 1, j, n);
	}
	
}

void merge_array(int a, int b, int c, int d, int n) {
    int t[50];
    int i = a, j = c, k = 0;

    while (i <= b && j <= d) {
		count1++;
        if (arr[i] < arr[j])
            t[k++] = arr[i++];
        else
            t[k++] = arr[j++];
    }

    
    while (i <= b)
        t[k++] = arr[i++];

    while (j <= d)
        t[k++] = arr[j++];

    for (i = a, j = 0; i <= d; i++, j++)
        arr[i] = t[j];
		
	
}
