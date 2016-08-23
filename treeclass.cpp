// treeclass.cpp : This the main program to test the class
// NOTE: You should be able to reconstruct this entire program
// and tree class from scratch without looking!
// Practice doing it.
// When you get it down pat. Develop the delete routine
// When you write things like this USE Microsofts VS support
// when adding classes, methods etc   Seriously!!!!
//
// Use this class to practice writing additional methods
// such as a method that returns the number of nodes in the
// tree recursively.  Or the sum of all the values in the tree.
// or returns the number of nodes in the tree using the Node_ct scheme.
// How about a method that returns the average depth of all the nodes in the tree.
#include "tree.h"
#include "stdafx.h"
int main()
{
	Tree T;
	// Change the following to load 1000 random values into the tree.
	T.Insert(5);
	T.Insert(3);
	T.Insert(6);
	T.Insert(1);
	T.Insert(4);
	T.Insert(7);
	T.Print();
	return 0;
	// The tree will automatically be removed here. Why?
}

