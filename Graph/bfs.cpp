#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define vi vector<int> 
#define MOD 10000007
#define MAX INT_MAX
#define  MIN INT_MIN
#define all(v) (v).begin(), (v).end() 


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
struct Node{
	int val;
	Node *left;
	Node *right;
	Node(int x){
		val = x; left = right = NULL;
	}
};

 vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > nodes;
        if(!root) return nodes;
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            while(n--){
                
                Node * curr = q.front();
                if(curr != nullptr ) level.push_back(curr->val);
                q.pop();
                
                
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right) {
                    q.push(curr->right);
                }
            }
            if(level.size() > 0) nodes.push_back(level);
        }
        return nodes;   
    }
void solve(){
		
		
		 Node* root = new Node(10); 
	    root->left = new Node(11); 
	    root->left->left = new Node(7); 
		root->right = new Node(9); 
		root->right->left = new Node(15); 
	    root->right->right = new Node(8); 
	   
		vector<vector<int> > res;
		res = levelOrder(root); 
        print_mat(res);
}


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

        solve();
        


    }


    return 0;
}
