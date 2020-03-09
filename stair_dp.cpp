#include<bits/stdc++.h>
using namespace std;

int climbStair(unsigned int n){
    vector<int> dp(n+1);

    dp[0] = 1;
    dp[1] = 2;
    for(auto i=2; i<=n;i++){
        //int will cause overflow for big int
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n-1];
}

int main(){

    for(int i=1;i<10;i++){
        cout<<i<<": "<<climbStair(i)<<endl;
    }
    
    return 0;
}