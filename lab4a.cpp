#include<iostream> 
#include <list> 
using namespace std; 
class Graph 
{ 
    int V;    
  
    list<int> *adj; 
  
    void dfssearch(int v, bool visited[]); 
public: 
    Graph(int V);   
    void addEdge(int v, int w); 
    void printComponents(); 
}; 
  

void Graph::printComponents() 
{ 
   
    bool *visited = new bool[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visited[v] == false) 
        { 
            
            dfssearch(v, visited); 
  
            cout << "\n"; 
        } 
    } 
} 
  
void Graph::dfssearch(int v, bool visited[]) 
{ 
    
    visited[v] = true; 
    cout << v << " "; 
  
    
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            dfssearch(*i, visited); 
} 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  

void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 
  
 
int main() 
{ 
  
    Graph g(5); 
    g.addEdge(1, 0); 
    g.addEdge(1, 2); 
    g.addEdge(3, 4); 
    g.printComponents(); 
	return 0; 
} 

