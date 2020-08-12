#include<bits/stdc++.h>

using namespace std;

struct TwoStack{
	
	int *arr, cap, top1, top2;
	TwoStack(int n){
		cap = n;
		top1 = -1;
		top2 = cap;
		arr = new int[n];
	}
	
	void push1(int x){
		if(top1 < top2 -1 ){
			++top1;
			arr[top1] = x;
		}else{
			cout<<"exitting because stack overflow"<<endl;
			//~ cout<<"exitting because stack underflow"<<endl;
			exit(1);
		}
	}
	void push2(int x){
		if(top1 < top2 -1 ){
			--top2;
			arr[top2] = x;
		}else{
			cout<<"exitting because stack overflow"<<endl;
			exit(1);
		}
	}
	
	int pop2(){
		if(top2 < cap){
			int x = arr[top2];
			top2++;
			return x;
		}else{
			cout<<"exitting because stack underflow"<<endl;
			exit(1);
		}
	}
	int pop1(){
		if(top1 >= 0){
			int x = arr[top1];
			top1--;
			return x;
		}else{
			cout<<"exitting because stack underflow"<<endl;
			exit(1);
		}
	}
	
	void printStack(){
		//~ for(auto x: arr) cout<<x<<" ";
		for(int i=0;i<cap;i++)cout<<arr[i]<<" ";
		cout<<endl;
	}
	
};

int main(){
	
	struct TwoStack s(5);
	s.push1(1);
	s.push2(2);
	s.push2(3);
	s.push1(5);
	s.push1(4);
	//~ s.push2(31);
	//~ s.push1(21);
	s.printStack();
	return 0;
}
