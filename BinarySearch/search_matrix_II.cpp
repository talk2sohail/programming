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


bool search(vector<vector<int> > &matrix, int target){
	
	int col = matrix[0].size();
	int row = matrix.size();
	int i = 0,j = col -1;
	while( i < row && j>=0 ){
		if(matrix[i][j] == target){
			return true;
		}
		if(matrix[i][j] > target) {
			j--;
		}else{
			i++;
		}
	}
	return false;
	
}	
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

		vector<vector<int> > arr = {
  {1,   4,  7, 11, 15},
  {2,   5,  8, 12, 19},
  {3,   6,  9, 16, 22},
  {10, 13, 14, 17, 24},
  {18, 21, 23, 26, 30}
};	
	cout<<search(arr, 1);


    }


    return 0;
}
