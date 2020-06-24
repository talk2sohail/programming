#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long


typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
void sort_by_sec(pair<string, int> &a, pair<string, int> &b){
    
}


int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<ll> > dp(m, vector<ll>(n));
    
    if( obstacleGrid[0][0] == 1)
        return 0;
    if( obstacleGrid[m-1][n-1] == 1)
        return 0;

    dp[0][0] = 1;
    //check current cell or previous cell is blocked
   for(int i=1; i< n;i++){
       if( obstacleGrid[0][i] == 1 ||  (obstacleGrid[0][i] == 0  && dp[0][i-1] == 0))
            dp[0][i] = 0;
        else
            dp[0][i] = 1;
   }
   
    //check current cell or previous cell is blocked
   for(int i= 1; i<m;i++){
       if( obstacleGrid[i][0] == 1 ||  (obstacleGrid[i][0] == 0  && dp[i-1][0] == 0))
            dp[i][0] = 0;
        else
            dp[i][0] = 1;
   }
  
   //check if current cell is blocked if it is then set it to zero so that
   // it cannot contribute to the answer else apply DP
      for(int i=1; i< m;i++){
        for(int j=1; j<n;j++){
            if(obstacleGrid[i][j])
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
      }            
    
   
    return dp[m-1][n-1];
    }
int main(){
    vector<vector<int> > a;
    a = {
        {0,0,0},
        {0,1,0},
        {0,0,0}

        
    };
   
    cout<<uniquePathsWithObstacles(a)<<endl;
    return 0;
}
