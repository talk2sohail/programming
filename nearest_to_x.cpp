#include<bits/stdc++.h>
using namespace std;

#define ll long long

void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<a.size();i++){
        for(auto j=0;j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int getClose(int a, int b, int t){
	return (t-a < t-b? b : a);
}


//using binary search
int findClosest(vector<int> &a, int target){

    int n = a.size();
    //corner cases
    if( target <= a[0])
        return a[0];
    if(target >= a[n-1])
        return a[n-1];

    int i =0, j = n, mid = 0;
    while( i < j){
        mid = (i+j)/2;

        if( a[mid] == target)
            return a[mid];
        
        if( target < a[mid]){

            if( mid > 0 && target > a[mid-1])
                return getClose(a[mid-1], a[mid], target );
            
            j = mid;
        }
        else{
            if( mid < n-1 && target < a[n-1])
                return getClose(a[mid], a[mid+1], target);
            i = mid + 1;
        }
    }
    return a[mid];
    
}
//using the lower_bound function on set
int findClosest2(vector<int> &a, int target){
    //x is an iterator to the element
    auto  x = lower_bound(a.begin(), a.end(), target);
    if( x == a.begin())
        return *x;
    else if( x == a.end())
    {
        --x;
        return *x;
    }
    else
    {
        int a = *x;
        --x;
        int b = *x;
        if( target-a < target-b) return b;
        else return a;
        
    }
    
}
int main(){
    vector<int> arr = {1,2,4,5,6,6,8,9};
    int t = 11;
    cout<<findClosest(arr, t)<<endl;
    return 0;
}
