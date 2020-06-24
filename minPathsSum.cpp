#include<bits/stdc++.h>
using namespace std;

#define ll long long


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<a.size();i++){
        for(auto j=0;j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int> > dp(m, vector<int>(n, 0));
    dp[0][0] = grid[0][0];

    for(int i=1; i<n;i++){
        dp[0][i] = grid[0][i] +  dp[0][i-1];
        cout<<dp[0][i]<<" ";
    }
    for(int i=1;i<m;i++){
        dp[i][0] = grid[i][0] + dp[i-1][0];
        cout<<dp[i][0]<<" ";
    }
    for(auto i=1; i<m;i++){
        for(auto j=1;j<n;j++){
            dp[i][j] = grid[i][j] + min(dp[i][j-1], dp[i-1][j]);
        }
    }
     
    return dp[m-1][n-1];    
}

int main(){

    vector<vector<int> > grid(3, vector<int>(3));
    grid = {
        {1,3,1},
        {1,5,1},
        {4,2,1}
    };
    cout<<minPathSum(grid);
    // print_mat(grid);

    return 0;
}