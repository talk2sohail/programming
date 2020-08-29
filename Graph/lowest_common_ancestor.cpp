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
 
void inorder(Node *node){
	
	if(!node)  return ;
	
	inorder(node->left);
	cout<<node->val<<" ";
	inorder(node->right);
}

bool findpath(Node *root, vector<Node *> &p , int n){
	
	if(!root) return false ;
	p.push_back(root);
	
	if(root->val == n) return true;
	
	if(findpath(root->left, p, n) || findpath(root->right, p, n)) return true ;
	
	p.pop_back();
	
	return false ;
}
	

Node *lca1(Node *root ,int n1 , int n2) {
	//two array to keep the nodes in the path 
	vector<Node *> p1 , p2;
	if(!findpath(root, p1, n1) || !findpath(root , p2 , n2)) return NULL;
	
	//search the paths for common ancestor  
	Node *ancestor = NULL;
	for(int i=0;i<(int)p1.size() -1 && i < (int )p2.size()-1; ++i){
		if(p1[i+1] != p2[i+1] ) { ancestor=p1[i] ; break; }
 	}
	
	return ancestor;
}
	
void solve(Node *root){
	
		//~ cout<<"The inorder traversal order: "<<endl;
		//~ inorder(root);
		
		
		Node * node = lca1(root , 7, 8);
		cout<<"The lca is:: "<<node->val<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

		//~ solve1();
		Node* root = new Node(10); 
	    root->left = new Node(11); 
	    root->left->left = new Node(7); 
		root->right = new Node(9); 
		root->right->left = new Node(15); 
	    root->right->right = new Node(8); 
		solve(root);
        


    }


    return 0;
}
