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


Node * peek(stack<Node *> &s){
	return s.top() != NULL ? s.top() : NULL;
}
void postorder_stack_traversal(Node *root){
	if(!root) return;
	
	
	
	stack<Node *> s;
	Node *curr = root;
	
	while(curr != NULL || !s.empty()){
		
		if(curr != NULL){
			
			s.push(curr);
			curr = curr->left;
		}else{
				Node * tmp = peek(s)->right;
				if(tmp == NULL){
					tmp = s.top();
					s.pop();
					cout<<tmp->val<<" ";
					
					while(!s.empty() && tmp->val == peek(s)->right->val){
						tmp = s.top();
						s.pop();
						cout<<tmp->val<<" ";
					}
				}else{
					curr = tmp;
				} 
		}
			
			
	}
		
		
}
void inorder_stack_traversal(Node *root){
	
	// node empty tree 
	//~ if(!root) return root;
	
	stack<Node*> s;
	Node *curr = root;
	while(curr != NULL ||  !s.empty()){
		
		while(curr != NULL) {
			s.push(curr);
			curr = curr->left;
		}
		
		
		curr = s.top();
		s.pop();
		cout<<curr->val<<" ";
		
		curr = curr->right;
		
	}

}


void preorder_stack(Node *root){
	
	if(!root) return ;
	
	stack<Node *> s;
	Node *curr = root;
	
	while( !s.empty() || curr != NULL){
		
		while(curr != NULL){
			cout<<curr->val<<" ";
			
			if(curr->right) s.push(curr->right);
			curr = curr->left;
		}
		
		if(	!s.empty()) {
			curr = s.top();
			s.pop();
		}
		
	}
	
	
}

// O(n) time and O(h) call stack
int isBalanced(Node *root){
	
	if(root == NULL ) return 0;
	
	int lh = isBalanced(root->left);
	if(lh == -1) return -1;
	int rh  = isBalanced(root->right);
	if(rh == -1) return -1;
	
	if(abs(rh - lh) >  1) return -1;
	
	return max(rh, lh) + 1;
	
}
void solve(){
		
		
		 Node* root = new Node(10); 
	    root->left = new Node(11); 
	    root->left->left = new Node(7); 
		root->right = new Node(9); 
		root->right->left = new Node(15); 
	    root->right->right = new Node(8); 
	   
		cout<<isBalanced(root)<<endl;
		//~ inorder_stack_traversal(root);
		//~ preorder_stack(root);

		postorder_stack_traversal(root);
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
