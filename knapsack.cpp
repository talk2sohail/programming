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

int knapsack(vector<int> &val, vector<int> &wt, int W, int n){
	
	vector<vector<int> > dp(n+1, vector<int>(W+1)); // 4x7
	for(int i=0;i<=W;i++)
		dp[0][i] = 0;
		
		
	for(int i=1;i<=n;i++){
		dp[i][0] = 0;
		for(int j=1;j<=W;j++){
			
			if( wt[i-1] <= j)
				dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
			}
		}
		
		return dp[n][W];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> wt = {1,2,4};
	vector<int> val = {10, 12, 28};
	int W = 6;
	cout<<knapsack(val, wt, W, wt.size());
	
    return 0;
}
