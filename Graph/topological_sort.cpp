#include<bits/stdc++.h>

using namespace std;



void print_topological_sort(vector<int> adj[], int node, vector<int> &in){
	
	queue<int> q;
	int j = 0;
	while( j< (int ) in.size()){
		if( in[j] == 0){
			q.push(j);
		}
		++j;
	}
	
	while( !q.empty()){
		int cur  = q.front();
		q.pop();
		cout<< cur << " ";
		for( auto u : adj[cur]){
				
			in[u]--;
			if( in[u] == 0)
				q.push(u);
				
		}
	}
} 



int main(){
		
	int v;
	cin>> v;
	vector<int> indegree(v);
	vector<int> graph[v];

	graph[0] = {2,3};
	graph[1] = {3,4};
	graph[2] = {3};
	//keeoing the in degree of all nodes here 
	for(int i=0;i< v;i++){
		for(auto s : graph[i]) indegree[s]++;
	}
	
	//~ for(auto ele : indegree) cout<< ele << " ";
	print_topological_sort(graph, 0, indegree);
	
	
	
	return 0;
	
}
