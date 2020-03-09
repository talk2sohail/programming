#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
    int F[N+1];
    F[0] = 0;
    F[1] = 1;
    for(auto i=2; i<=N;i++){
        F[i] = F[i-1] + F[i-2];
    }
    return F[N];
}

int main(){

    for(auto i=0;i<20;i++){
        cout<<i<<" :"<<fibonacci(i)<<endl;
    }
    return 0;

}

    

