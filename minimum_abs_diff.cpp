int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int ans = INT_MAX;
    int i=A.size() - 1, j = B.size() - 1, k = C.size() - 1;
    while( i >=0 && j>= 0 && k >= 0){
        
        int MAX = max(A[i] , max(B[j], C[k]));
        int MIN = min(A[i] , min(B[j], C[k]));
        
        ans = min( ans, MAX - MIN);
        if(A[i] == MAX) i--;
        else if(B[j] == MAX) j--;
        else k--;
    }
 
    
    return ans;
    
    
}

