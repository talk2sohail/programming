#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define vi vector<int> 
#define MOD 10000007
#define MAX INT_MAX
#define  MIN INT_MIN
#define all(v) (v).begin(), (v).end() 


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//~ int matrix[10][10];
int visited[10][10] = {0};

vector<int> riversize(vector<int> &matrix){
		vector<int> sizes;
		for(int i=0;i<(int)matrix.size();i++){
			for(int j=0;j<matrix[i];j++){
				if(visited[i][j] || matrix[i][j] == 0)
					continue
				int s = dfs(i, j, matrix);
				sizes.push_back(s);
			}
		}
}

int dfs(int i, int j, vector<int> &matrix){
	visited[i][j] = 1;
	vector<int> l = {0,0,-1,1};
	vector<int> r = {1,-1,0,0};
	int cnt = 1;
	
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

        


    }


    return 0;
}
