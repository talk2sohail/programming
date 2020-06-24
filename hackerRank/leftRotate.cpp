void reverseArray(vector<int> &nums, int l, int h){

    while( l < h){
       swap(nums[l], nums[h]);
        l++;
        h--;
    }
}
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    reverseArray(a, 0, d-1);
    reverseArray(a, d, n-1);
    reverseArray(a, 0, n-1);

    return a;
}
