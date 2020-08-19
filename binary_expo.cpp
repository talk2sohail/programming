#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define vi vector<int> 
#define MOD 10000007
#define MAX INT_MAX
#define MIN INT_MIN 


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int binary_expo(int a , int b){
    int res = 1;
    while(b){

       if(b%2 == 0){
           a = a * a;
           b = b / 2;
       }else{
           res *= a;
           b--;
       }
    }

    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        cout<<binary_expo(a, b);
        cout<<endl;


    }


    return 0;
}
