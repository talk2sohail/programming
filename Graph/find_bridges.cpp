#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define lli long long int
#define vi vector<lli>

#define ff first 
#define ss second



// A utility function to add an edge in an undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numNode, numConnections;
	cin>>numNode>>numConnections;
    //array of vectors
    vector<int> adj[numNode];
	vector<pair<int , int >> connections;
	//take the number of connection / no of edges
	
	for(int i=0;i<numConnections;i++){
		int a, b;
		cin>>a>>b;
		addEdge(adj, a, b);
		
	}
	

    printGraph(adj, numNode);

    cout << endl;
    return 0;
}
