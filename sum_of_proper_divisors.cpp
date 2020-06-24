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
string Solve (int N) {
   // Write your code 
   ll sum = 1;
   ll o = N;
   for(ll i = 2; i<= sqrt(N); i++){
       
       int c_sum  = 1;
       int c_term = 1;
       while( N%i == 0){

           N = N /i;
           c_term *= i;
           c_sum += c_term;
       }
       sum *= c_sum;
   }
   if( N>= 2)
		sum  *= (1+N);
   printf("%lld", sum -o );
   return ( o == (sum/2)? "YES" : "NO");

}

int main(){
	
	int N = 28;
	cout<<Solve(N);
	
    return 0;
}
