#include "stdafx.h"
#include "tree.h"
//constructor
Tree::Tree(void)
{
	root = 0;
}

// This is the destructor.  When does it get called.
// There are several places of interest
Tree::~Tree(void)
{
	RemoveTree(root);
}

// Note the & .  Why is it needed
void Tree::RemoveTree(Node *& r) {//Inorder deletion of entire tree;
	if (r == 0)return;
	else {
		RemoveTree(r->left);
		RemoveTree(r->right);
		delete r;
		r = 0;
	}
}

// Note the &.  Why is it needed here as well 
void Tree::AuxInsert(Node *& r, int v) {
	if (r == 0) {//insert node here
		r = new Node(v);
	}
	else if (v <= r->val) AuxInsert(r->left, v);
	else AuxInsert(r->right, v);
};

//Public method to insert a node into the tree
void Tree::Insert(int v)
{
	AuxInsert(root, v);
}

// Private recursive method to print the tree
void Tree::AuxPrint(Node * r) {//Inorder
	if (r == 0)return;
	else {
		AuxPrint(r->left);
		cout << r->val << " ";
		AuxPrint(r->right);
	}
}

void Tree::Print() {
	AuxPrint(root);
	cout << endl;
}
