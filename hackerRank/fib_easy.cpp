#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define REP(i, n) for(int i=1;i <= n;i++)
#define vi vector<int> 
#define MOD 1000000007
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


/*
 * some global arrays
 * ar : to keep track of the original 
 * I : Identity matrix for matric multiplocation
 * T : Transition matrix for exponentiation of the matrix
 * 
 *  */
 
 // size is 3 because the indexing is done 1-based
 lli ar[3];
 lli I[3][3], T[3][3];
 
 void mul(lli A[3][3] , lli B[3][3], int dim){
	 
	 lli res[dim+1][dim+1];
	 
	 for(int i=0; i<= dim; i++ ){
		 for( int j=0; j<= dim ; j++) {
			 
			res[i][j] = 0;
			  for(int k = 1; k<= dim ; k++){
				  lli x = ( A[i][k] * B[k][j] ) % MOD;
				  res[i][j] = (res[i][j] + x) % MOD;
			  }
		  }
	  }
	  
	  for(int i=1;i<= dim ; i++){
		  for(int j=1; j<= dim;j++){
			  A[i][j] = res[i][j];
		  }
	  }
 }
 
 
 lli getFib(int n){
	 
	 if( n <= 2 ) return ar[n];
	 
	 //initialize the identity mat
	 I[1][1] = I[2][2] = 1;
	 I[1][2] = I[2][1] = 0;
	 
	 //make the transition matrix 
	 T[1][1] = 0;
	 T[1][2] = T[2][1] = T[2][2] = 1;
	 
	 // find the matrix raised to n - 1
	n = n-1;
	 while( n){
		 
		 if( n%2 )
			mul(I, T , 2) , n--;
			
		else
			mul(T, T, 2) , n /=2;
	}
	
	lli Fn = (  (ar[1] * I[1][1] ) + ( ar[2] * I[2][1] ) )  % MOD;
	return Fn;
}
int main(){
	
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t, n;
    cin>>t;
    while(t--){

        cin>>ar[1]>>ar[2]>>n, n++;
        cout<<getFib(n)<<endl;


    }


    return 0;
}
