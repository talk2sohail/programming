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

int BS(vector<int> &arr, int x){
	
	if(arr.size() == 0 ) return -1;
	
	int left = 0;
	int right = arr.size();
	while(left < right ) {
		int mid = left +  (right - left)/2;
		
		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x)
			right = mid;
		else left = mid+1;
	}
	
	return arr[left] == x ? left : -1;
}

void solve(){
	
	vector<int> a = {1,2,3,4,5};
	cout<<BS(a, 6);
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
