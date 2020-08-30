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

bool isCousins(Node* root, int x, int y) {
	if(root == NULL) return false;
	
	Node * p1, *p2;
	int d1, d2;
	
	queue<Node *> q;
	q.push(root);
	
	int level = 0;
	while(!q.empty()){
		
		int n = q.size();
		while(n--){
			
			Node *t = q.front();
			q.pop();
			
			if(t->val == x ) d1 = level;
			if(t->val == y ) d2 = level;
			
			if(t->left && t->left->val == x ) p1 = t;
			if(t->right && t->right->val ==x ) p1 = t;
			
			if(t->left && t->left->val == y ) p2 = t;
			if(t->right && t->right->val ==y ) p2 = t;
			
			
			if(t->left) q.push(t->left);
			if(t->right) q.push(t->right);
		}
		level++;
	}
	
	if(d1==d2 && p1->val != p2->val ) 
		return true;
	else
		return false;
}

void solve(){
		
		
		 Node* root = new Node(10); 
	    root->left = new Node(11); 
	    root->left->left = new Node(7); 
		root->right = new Node(9); 
		root->right->left = new Node(15); 
	    root->right->right = new Node(8); 
		cout<<isCousins(root, 7, 8);
	
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
