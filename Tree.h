#pragma once
// What does the pragma command do?
#include <iostream>
using namespace std;
class Tree
{
	// PRIVATE vars
	struct Node {
		int val;
		Node * left;
		Node * right;
		//Here is a constructor that works with a struct as we discussed.
		Node(int v) { val = v; left = right = 0; } // Node constructor!
	};
	Node * root;
	// add a node_ct variable here and mod the methods to work 
	// add a method called GetSize() to return this 
	void AuxInsert(Node *&, int);
	void AuxDelete(Node *&);
	void AuxPrint(Node *);
	void RemoveTree(Node *& r);
	int sizeTree(Node *& r);
	Node * Tree::nodeRP(int v, Node *r);

	// We now go public
public:
	Tree(void);
	~Tree(void);
	void Insert(int v);
	void Delete(int v);
	void Print();//Can you change this to have a parameter
				 // Print(PREORDER), Print(INORDER) and Print(Postorder) ?
				 // PREORDER etc enums
};

