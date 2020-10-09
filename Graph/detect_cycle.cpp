#include<bits/stdc++.h>

using namespace std;


bool DFS(vector<int> adj[], int node , int parent , vector<int> &visited) {
		
	visited[node] = 1;
	
	for(auto s: adj[node]){
		
		if( visited[s] == 0){
			if( DFS(adj , s, node, visited)) 
				return 1;
		}else if( s != parent){
			return 1;
		}
	}
	
	return 0;
}


int detect_cycle(vector<int> adj[], int v){
	
	
	vector<int> vi(v, 0);	
	for( int i=1;i<=v;i++){
		if( !vi[i] ){
			if( DFS(adj , i , -1 , vi))
				return 1;
			}
		}
	return 0;

}


int main(){
		
	int v;
	cin>> v;
	vector<int> graph[v];

	graph[0] = {2,3};
	graph[1] = {3,4};
	graph[2] = {3};

	
	cout<< "The Graph contains cycle or not ? : "<< ( detect_cycle(graph, v) ? "True" : "False" );
	
	
	
	return 0;
	
}
