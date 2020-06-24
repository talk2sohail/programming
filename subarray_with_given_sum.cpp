#include <bits/stdc++.h>
using namespace std;


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
// s: target sum
void subarraySum(int arr[], int n, int s){
    
    // Your code here
    int start = 0, i;
    int current_sum = arr[0];
    int flag = 0;
    for(int i = 1; i <= n; i++){
        
        while(current_sum > s && start < i -1){
            current_sum -= arr[start];
            start++;
        }
        
        if( current_sum == s){
            cout<<start+1<<" "<<i;
            flag = true;
            break;
        }
        
        if( i < n){
            current_sum += arr[i];
        }
    }
   if(!flag){
       cout<<-1;
   }
    
}

// Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  