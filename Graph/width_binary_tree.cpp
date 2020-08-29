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
 


int maxWidth(Node *root) {
	
	
	if(!root) return 0;
	queue<Node *> q;
	
	q.push(root);
	
	
	while(q.empty() == 0){
		
		int count = q.size();
		res = max(count , res);
	
		for(int i=0;i<count;++i){
			Node * curr = q.front();
			q.pop();
			if(curr->left) q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
	}
	
	return res;
	
}


void solve(){
		
		
		 Node* root = new Node(10); 
	    root->left = new Node(11); 
	    root->left->left = new Node(7); 
		root->right = new Node(9); 
		root->right->left = new Node(15); 
	    root->right->right = new Node(8); 
	    cout<<"\n_________\n";
		cout<< "The max widht of the tree is:: "<<maxWidth(root);
		cout<<endl;
		cout<<isBalanced(root);
	
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
