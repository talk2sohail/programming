#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
		
		long n,k;
		cin>>n>>k;
		map<long,long> hash_map;
		vector<long> arr(n);
		
		sort(arr.begin(),arr.end());
		bool flag = 1;
		for( int i=0;i<n;i++){
			scanf("%ld", &arr[i]);
			
			if( hash_map.find(arr[i]) != hash_map.end() ) {
					hash_map[arr[i]]++;
					flag  = 1;
			}else{
					hash_map.insert(make_pair(arr[i],1));
			} 	
		}
		
		
		if(flag){
			
		for(auto x: hash_map){
			if(x.second == k)
				cout<<x.first<<endl;
			}
		}else{
			
			cout<<-1;
		}
		//print the hash map here
			
		
	}
	
	return 0;
}
