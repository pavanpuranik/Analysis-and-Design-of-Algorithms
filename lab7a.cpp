#include<bits/stdc++.h>  
using namespace std; 
  
int max(int a, int b);  
  

void lcs( char *X, char *Y, int m, int n )  
{  
    int L[m + 1][n + 1];  
    int i, j;  
   
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
     
	int index = L[m][n];
	char lcs[index+1];

	lcs[index] = '\0'; 

	int a = m, b = n;

	while (a > 0 && b > 0){

		if (X[a-1] == Y[b-1]){

			lcs[index-1] = X[a-1]; 

			a--; b--; index--;

		}

		else if (L[a-1][b] > L[a][b-1])

			a--;

		else

			b--;

		}

	cout<<lcs;
	 
    cout<<L[m][n];  
	
	
}  
  
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}  
  

int main()  
{  
    char X[] = "Pavan";  
    char Y[] = "Puranik";  
      
    int m = strlen(X);  
    int n = strlen(Y);  
      
    cout << "LCS and its length is";
	lcs( X, Y, m, n );  
      
    return 0;  
}  
  