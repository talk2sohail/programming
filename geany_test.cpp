#include<bits/stdc++.h>
using namespace std;

int  func(int x){
	if( x == 0)
		throw invalid_argument("parameter cannot be zero");
	return (x-1)*x;
}


int main(){
	
	//~ vector<int> vec(10,0);
	//~ for(int i=0;i<(int )vec.size(); i++){
		//~ vec[i] = vec[i] + 'a';
	//~ }
	//~ for(auto x: vec) cout<<x<<" ";
	//~ cout<<endl;
	
	try{
		int res = func(0);
		cout<<res;
	}catch(exception &t){
		cerr<<"Caught: "<<t.what()<<endl;
		cerr<<"Type :"<<typeid(t).name()<<endl;
	}
	
	//~ printf("Hello Sohail");
	return 0;
}
