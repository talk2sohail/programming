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
int maxSS(int arr[], int n){
	if(n ==1)
		return arr[0];
	int m = n/2;
	int leftMSS = maxSS(arr, m);
	int rightMSS = maxSS(arr+m, n-m);
	int l_sum= INT_MIN, r_sum = INT_MIN, sum = 0;
	
	for(auto i=m;i <n; i++){
		sum += arr[i];
		r_sum = max(sum, r_sum);
	}
	sum = 0;
	for(auto i=m-1; i>=0; i--){
		sum += arr[i];
		l_sum = max(sum, l_sum);
	}
	int ans = max(leftMSS, rightMSS);
	return max(ans, l_sum+r_sum);
}

int maxSubArray(vector<int>& nums) {
	int n = nums.size();
	int arr[n];
	int i=0;
	for(auto a: nums){
		arr[i] = a;
		i++;
	}
   return maxSS(arr,n);
     
}
//int maxSubArray(vector<int>& nums) {
      //int ans = INT_MIN, sum = 0;
      //for(int i=0;i<(int)nums.size(); i++){
		 //sum  = sum + nums[i];
		 //if( ans < sum )
			//ans = sum;
			
		 //if( sum < 0)
			//sum = 0;

	//}
	//return ans;
//}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> arr = {3,-2,5,-1};
	cout<<maxSubArray(arr)<<"\n";
    return 0;
}
