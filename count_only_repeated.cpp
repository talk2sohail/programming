#include<vector>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    cin>>n;
	    vector<long long> res(n);
	    for(auto &x: res)cin>>x;
	    int count = 0;
	    int i=0,j = 0;
	    for(i= 0;i < n-1; i++){
	      if(res[i] == res[i+1]){
	          j = i;
	          while(res[j] == res[i] && j< n){
	               count++;
	                j++;
	          }
	          cout<<res[i]<<" "<<count<<endl;
	          break;
	        
	      }
	        
	    } 
	}
	return 0;
}