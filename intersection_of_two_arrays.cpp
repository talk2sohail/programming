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
    for(auto i=0;i< (int) a.size();i++){
        for(auto j=0;j< (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

// O(mxn) time && O(m+n)
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		
		vector<int> output;
		for(auto x: nums2){
			auto it = find(nums1.begin(), nums1.end(), x); 
			if( it != nums1.end()){
				nums1.erase(it);
				output.push_back(x);
			}
		}
		return output;
        
}


int main(){
	vector<int> m = {4,9,5};
	vector<int> n = {9,4,9,8,4};
	vector<int> res = intersect(m,n);
	for(auto x:res) cout<<x<<" ";
	cout<<endl;
    return 0;
}
