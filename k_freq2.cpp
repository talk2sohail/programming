#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
 {
	//code
	ll t,n,k,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    ll a[n];
	    ll h[1000001]={0};
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        h[a[i]]++;
	    }
	    int f=0;
	    set<ll>s;
	    for(i=0;i<n;i++){
	        if(h[a[i]]==k){
	            s.insert(a[i]);
	           // h[a[i]]=0;
	            f=1;
	        }
	    }
	    set<ll>::iterator it;
	    it=s.begin();
	    while(it!=s.end()){
	        cout<<*it<<" ";
	        it++;
	    }
	    if(f==0)
	    cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
