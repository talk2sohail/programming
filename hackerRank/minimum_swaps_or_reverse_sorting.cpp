#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int ans = 0;
    int i =0 ;
    int n = arr.size() -1;
    while( i< n){

        if( arr[i] != i+1){

            while( arr[i] != i+1){

                int temp = arr[arr[i] -1];
                arr[arr[i] -1] = arr[i];
                arr[i] = temp;
                ans++;
            }
        }

        i++;
    }
    return ans;
}
