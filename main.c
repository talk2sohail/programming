#include<stdio.h>
int foo(int c);
int foo();

//~ extern int x ;
//~ int x =10;
int main(){
	
	extern 	int x;
	x = 19;
	printf("%d",x);
	
	return 0;
	
}

int x = 10;
int foo(int c){ return 1;}
