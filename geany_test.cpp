#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> vec(10,0);
	for(int i=0;i<(int )vec.size(); i++){
		vec[i] = vec[i] + 'a';
	}
	
	for(auto x: vec) cout<<x<<" ";
	cout<<endl;
	
	//~ printf("Hello Sohail");
	return 0;
}
