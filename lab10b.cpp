#include<iostream>
#include <stdio.h> 
#include <limits.h>
using namespace std; 
  
#define V 5


  
void floyd(int graph[][V]) {
	int i;
	int j;
	int k;
	for(k=0;k<V;k++)
		for(j=0;j<V;j++)
			for(i=0;i<V;i++)
				graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
	
	
	for(i=0;i<V;i++)
		
		for(j=0;j<V;j++)			
			cout<<graph[i][j]<<"\t";
}

  
int main(){ 
    int graph[V][V] = {{0, 2, 999, 1, 8},
                       {6, 0, 3, 2, 999},
                        {999, 999, 0, 4, 999},
                        {999, 999, 2, 0, 3},
                        {3, 999, 999, 999, 0}
						};
                       
    floyd(graph); 
    return 0; 
} 