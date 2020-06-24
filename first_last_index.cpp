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
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int first_pos(vector<int> &a, int x){
	int n = a.size();
	int first_i = n;
	int l = 0, high = n-1;
	while( l <= high ){
		int mid = l + ( high - l) /2;
		
		if( a[mid] >= x){
			first_i = mid;
			high = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return first_i;
}
			
vector<int> findIndex(vector<int> &a, int x){
	int first = first_pos(a, x);
	int last = first_pos(a, x+1) -1;
	
	if( first <= last)
		return {first, last};
	else
		return {-1, -1};
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//int N = 28;
	//cout<<Solve(N);
	vector<int> v= {1,2,3,6};
	for(auto x: findIndex(v, 0))cout<<x<<" ";
	cout<<endl;
	
	
    return 0;
}
