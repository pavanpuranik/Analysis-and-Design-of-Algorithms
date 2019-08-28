#include <iostream>

#include<stdlib.h>



using namespace std;

void merge_sort(int, int);
void merge_array(int, int, int, int);

int arr[10],n;

int main() {
    int i;
    cin>>n;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(0, n-1);

    
    for (i = 0; i < n; i++) {
	
        cout << arr[i];
    }

    

}

void merge_sort(int i, int j) {
    int m;

    if (i < j) {
        m = (i + j) / 2;
        merge_sort(i, m);
        merge_sort(m + 1, j);
    
        merge_array(i, m, m + 1, j);
    }
}

void merge_array(int a, int b, int c, int d) {
    int t[50];
    int i = a, j = c, k = 0;

    while (i <= b && j <= d) {
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
