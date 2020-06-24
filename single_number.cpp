#include<bits/stdc++.h>

using namespace std;


int singleInteger(std::vector< int> &nums){

        int number = nums[0];
        for(int i=1; i< nums.size(); i++){
            number ^= nums[i];
        }
        return number;
}
int main(){

	vector<int> arr = {4,1,1,4, 2};
	int res = singleInteger(arr);
	cout<<res<<endl;
	return 0;
}