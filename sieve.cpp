#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define vi vector<int> 
#define MOD 10000007
#define MAX INT_MAX
#define  MIN INT_MIN 


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int ar[1000001];

void sieve(){

    int maxN = 1000000;
    memset(ar, -1, sizeof(ar));
    for(int i=2;i*i<=maxN;i++){
        if(ar[i] == -1 ){
            for(int j=i; j<=maxN; j+= i){
                if(ar[j] == -1 ){
                    ar[j] = i;
                }
            }
        }
    }


}

void print_prime_factors(int n){

    while(n != 1){
        cout<<ar[n]<<" ";
        n = n / ar[n];
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

        sieve();
        print_prime_factors(1000);
        
    }


    return 0;
}
