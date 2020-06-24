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
//retaining order
void moveToEndOrder(vector<int> &nums){
     int n = nums.size();
        int c = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0)
                swap(nums[c++], nums[i]);
        }
}
//not retaining order
void moveToEnd(vector<int> &nums){
    int n = nums.size();
    int i=0,j=n-1;
    while( i<j){

        while( i < j && nums[j] == 0)
            j--;
        if( nums[i] == 0)
            swap(nums[i], nums[j]);
        i++;
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> a = {0,1,0,3,12};
    moveToEndOrder(a);
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
