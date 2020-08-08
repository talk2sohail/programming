
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n,z, c=0, x;
		cin>>n>>z;
			
		//~ vector<lli> arr(n);
		
		//~ for(auto  &x: arr) cin>>x;
		//~ lli x;
		priority_queue<lli> pq;
		while(n>0){
			cin>>x;
			pq.push(x);
			n--;
		}

		while( (z>0) && (pq.top() > 0)){
			z = z - pq.top();
			pq.push(pq.top()/2);
			pq.pop();
			c++;
		}
		
        if(z>0) cout<<"Evacuate";
        else cout<<c;
        cout<<endl;
	}
	
	return 0;
	}
