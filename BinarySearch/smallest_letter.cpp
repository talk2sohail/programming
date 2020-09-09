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

char nextGreatestLetter(vector<char>& letters, char target) {
        
    int left = 0; 
    int right = letters.size()-1;
    int index = -1;
    while(left <= right){
		
		int mid = left + (right - left)/2;
		
		if( letters[mid] > target ) {
			index = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	
	if(index == -1)
		return letters[0];
	return letters[index];
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){
		vector<char> a= {'c','f','j'};
		cout<<nextGreatestLetter(a, 'k');
    }


    return 0;
}
