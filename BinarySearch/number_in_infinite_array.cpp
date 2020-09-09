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
int BS(vector<int> &arr, int left , int right , int target){
	
	if(arr.size() == 0 ) return -1;
	
	while(left < right ) {
		int mid = left +  (right - left)/2;
		
		if(arr[mid] == target)
			return mid;
		else if(arr[mid] > target)
			right = mid;
		else left = mid+1;
	}
	
	return arr[left] == target ? left : -1;
}

int search(vector<int> &arr, int target){
	
	if(arr.size() == 0) return -1;
	
	if(arr[0] == target) return 0;
	
	int left = 1;
	while(arr[left] < target ) left = left*2;
	if(arr[left] == target) return left;
	
	return BS(arr, left/2, left, target);
}
	

void solve(){
	
	vector<int> a = {1,2,3,4,5,6,7,8,9}; //....
	cout<<search(a, 8);
	
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

        solve();


    }


    return 0;
}
