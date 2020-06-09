
void add(vector<lli> &arr, int low, int high, long  value){
    int n = arr.size();
    arr[low] += value;
    if(high + 1 <= n) arr[high+1] -= value;
        
}

void updateArray(vector<lli> &nums){
    int n = nums.size();
    for(auto i=1;i<=n; i++){
        nums[i] += nums[i-1];
    }
}
long arrayManipulation(int n, vector<vector<int>> queries) {

    //initialize to zeros
    vector<lli> array(n+1, 0);

    int rows = queries.size();
    for(int i=0;i<rows;i++){
        add(array, queries[i][0], queries[i][1], queries[i][2]);
    }

    //updating the array after all the queries
    updateArray(array);

    // for(auto x: array) cout<<x<<" ";
    // cout<<endl;

    //run a linear seacrh to find the lasgest
    lli maximum = -INT_MAX;
    for(int j=1;j<=n;j++){
        if( array[j] > maximum){
            maximum = array[j];
        }
    }

    return maximum;
}

