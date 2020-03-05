#include <bits/stdc++.h>
using namespace std;

//print pascal's triangle
vector<vector<int>> generate_pascal_triangle(int numRows)
{

	vector<vector<int>> dp(numRows, vector<int>(numRows));
	dp[0][0] = 1;
	for (int i = 0; i < numRows; i++)
	{

		for (int j = 0; j <= i; j++)
		{

			if (i == j || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}

	return dp;
}

void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<a.size();i++){
        for(auto j=0;j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void  print_snake_matrix(vector<vector<int> > &a){


	int R = a.size();
	int C = a[0].size();
    for(auto i=0;i<R;i++){
		if( i%2 == 0){
			for(auto j=0;j<C; j++){
            cout<<a[i][j]<<" ";
			}
        }
		else{
			for(auto j=C-1; j>=0; j--){
				cout<<a[i][j]<<" ";
			}
        }
	}
}

void print_Boundary_matrix(vector<vector<int>> &a){
	int R = a.size();
	int C = a[0].size();


	if(R==1){
		for(auto i=0;i<C;i++)cout<<a[0][i]<<" ";
	}
	else if( C == 1) {
		 for(auto i=0;i<R;i++) cout<<a[i][0]<<" ";
	}
	else{

		for(auto i=0;i<C;i++)cout<<a[0][i]<<" ";
		
		for(auto i=1; i<R;i++)cout<<a[i][C-1]<<" ";
		
		for(auto i=C-2;i>=0;i--)cout<<a[R-1][i]<<" ";
		
		for(auto i=R-2;i>=1;i--)cout<<a[i][0]<<" ";
		

	}
}

void Transpose_matrix(vector<vector<int>> &a){

	int R = a.size();
	int C = a[0].size();
	for(auto i=0;i<R; i++){
		for(auto j=i+1; j<C; j++){
			swap(a[i][j], a[j][i]);
		}
	}
}


void rotate90_anticlockwise(vector<vector<int>> &a){

	Transpose_matrix(a);
	for(auto i=0; i< a.size(); i++){
		int l = 0, h = a.size() - 1;
		while( l < h){
			swap(a[l][i], a[h][i]);
			l++;
			h--;
		}
	}
}

void rotate90_clockwise(vector<vector<int>> &a){

	Transpose_matrix(a);
	for(auto i=0; i< a.size(); i++){
		int l = 0, h = a[0].size() - 1;
		while( l < h){
			swap(a[i][l], a[i][h]);
			l++;
			h--;
		}
	}
}


// Driver code
int main()
{
	int m=4, n=4;
	vector<vector<int> > arr(m, vector<int>(n, 0));

	for(auto i=0;i<m;i++){
		for(auto j=0;j<n;j++){
			cin>>arr[i][j];
		}
	} 
	rotate90_clockwise(arr);
	print_mat(arr);
	
	return 0;
}
