class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        
        while( true){
            long sum = 0;
            while( n!= 0){
                int rem = n%10;
                n /= 10;
                sum += rem*rem;
            }
            if(s.count(sum) == 1){
                    return false;
            }
            else if( sum == 1){
                return true;
            }
            else{
                s.insert(sum);
                n = sum;
            }
               
        }
    }
};
