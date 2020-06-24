#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> A= {1,2,3,4,5};
	int B = 5;
	int i = 0, j = A.size() - 1;
    	int count = 0;
   	 while(i < j){
        	if(A[i] + A[j] == B) count++, i++, j--;
       		 else if(A[i] + A[j] > B) j--;
        	else i++;

  	  }
	cout<<count<<endl;
	return 0;
}
