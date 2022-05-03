#include <iostream>

#include "BTree.h"

using std::cout;
using std::endl;

int main()
{
	BTreeNode* bt1 = MakeTreeNode();
	BTreeNode* bt2 = MakeTreeNode();
	BTreeNode* bt3 = MakeTreeNode();
	BTreeNode* bt4 = MakeTreeNode();
	BTreeNode* bt5 = MakeTreeNode();
	BTreeNode* bt6 = MakeTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);

	MakeSubTree(bt1, bt2, SUB_LEFT);
	MakeSubTree(bt1, bt3, SUB_RIGHT);
	MakeSubTree(bt2, bt4, SUB_LEFT);
	MakeSubTree(bt2, bt5, SUB_RIGHT);
	MakeSubTree(bt3, bt6, SUB_RIGHT);

	/*
					 1
				2			3
			4		5			6
	*/

	PreorderTraverse(bt1, ShowData); cout << "Preorder" << endl;
	InorderTraverse(bt1, ShowData); cout << "Inorder" << endl;
	PostorderTraverse(bt1, ShowData); cout << "Postorder" << endl;


	DeleteTree(bt1);
}