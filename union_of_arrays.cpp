#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long


typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
void sort_by_sec(pair<string, int> &a, pair<string, int> &b){
    
}


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i< (int) a.size();i++){
        for(auto j=0;j< (int) a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
unordered_set<int> union_of( vector<int> &a, vector<int> &b){
	
	unordered_set<int> output;
	for(auto x: a)
		output.insert(x);
	for(auto x: b)
		output.insert(x);
	return output;
}

int main(){
	
	vector<int> m,n;
	m = { 1,2,1,3,4};
	n = { 3,5,6,2,7};
	unordered_set<int> res = union_of(m,n);
	for(auto x: res)
		cout<<x<<" ";
	cout<<endl;
	
    return 0;
}
