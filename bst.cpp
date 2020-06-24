#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *left, *right;
	Node (int x){
		key = x;
		left = right = NULL;
	}
};

bool Search(Node *root, int x){

	while( root != NULL){

		if( root-> key == x)
			return true;
		else if( root->key > x)
			root = root->right;
		else
			root = root->left;
	}

	return false;
}

Node * Insert(Node *root, int x){
	Node * temp = new Node(x);
	Node *parent =  NULL, *curr = root;
	while( curr != NULL){

		parent = curr;
		if( root->key < x )
			curr = curr->left;
		else if( root->key > x)
			curr = curr->right;
		else
			return root; 
	}

	if(parent == NULL)
		return temp;
	if( parent->key > x)
		parent->right = temp;
	else
		parent->left = temp;

	return	root;
}

int main(){

	return 0;
}