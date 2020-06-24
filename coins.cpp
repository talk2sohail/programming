#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF INT_MAX
void sort_by_sec(pair<string, int> &a, pair<string, int> &b){
    
}


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<a.size();i++){
        for(auto j=0;j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int solve(vector<int> &coins, int n){
    vector<int> values(n);
    values[0] = 0;
    for(auto x=1; x<=n;x++){
        values[x] = INF;
        for(auto c: coins){
            if(x -c>= 0){
                values[x] = min(values[x], values[x-c]+1);
            }
        }
    }
    return values[n];
}

//Driver code
int main(){
    vector<int> coins = {1, 3, 4};
    for(int i=1;i<=10;i++){
        int res = solve(coins, i);
        cout<<"Solve("<<i<<"): "<<res<<endl;
    }
    return 0;
}