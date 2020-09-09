class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        // for(auto x=1; x<=nums.size();x++) sum += x;
        sum = nums.size() * (nums.size() + 1) /2;
        for(auto i: nums) sum-= i;
        
        return sum;
    }
};
