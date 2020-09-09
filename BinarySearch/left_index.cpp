#include<bits/stdc++.h>

using namespace std;
int left_index(vector<int> arr, int low, int high, int x){
    int n = arr.size();
    if( low > high) return -1;

    int mid = (high + low) / 2;
    
    if( arr[mid] == x && (arr[mid - 1] != x || mid == 0))
        return mid;
    if( arr[mid] >= x) return left_index(arr, low, mid -1 , x);
    else return left_index(arr, mid + 1, high, x);
}

int main(){

    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for(auto &x: arr) cin>>x;
    int index = left_index(arr, 0, n-1, x);
    if(index == -1) cout<<"NOT FOUND";
    else cout<<"FIRST OCCURRENCE FOUND AT INDEX: "<<index;
    cout<<endl;

    return 0;
}