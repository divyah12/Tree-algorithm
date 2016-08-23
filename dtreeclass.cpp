#include "Tree.h"
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
	T.Delete(1);
	T.Print();
	return 0;
	// The tree will automatically be removed here. Why?
}