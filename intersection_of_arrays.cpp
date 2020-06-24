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
    for(auto i=0;i<(int) a.size();i++){
        for(auto j=0;j <(int) a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
   
    vector<int> output;
    unordered_set<int> s1;
    for(auto &x: nums1)
        s1.insert(x);
    for(auto x: nums2){
		if( s1.count(x) ) {
				output.push_back(x);
				s1.erase(x);
		}
	}
        return output;
}
int main(){
    vector<int> v1 = {10,11,10, 12};
    vector<int> v2 = {12, 10, 12};
    vector<int> res = intersection(v1, v2);
    for(auto &x: res) cout<<x<<" ";
    cout<<endl;
    return 0;
}
