#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pairs;
void whatFlavors(vector<int> cost, int money) {

    unordered_map<int, int> h;
    int  i= 0;
    for(auto x: cost){

        if(h.find(money - x) != h.end()){
            cout<<h[money-x]+1<<" "<<i+1;
        }else{
            h.insert(make_pair(x, i));
        }
        i++;
    }

    // cout<<"printing the values: \n";
    
    // auto it = h.begin();
    // while(it != h.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     // cout<<*it<<endl;
    //     it++;
    // }

}


int main(){

    vector<int> ar = {1,4,5,3,2};
    whatFlavors(ar, 4);
    return 0;
}