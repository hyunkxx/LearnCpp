#include <iostream>
#include <cassert>

#include "BTree.h"


using namespace std;
 
BTreeNode* MakeTreeNode()
{
	BTreeNode* node = new BTreeNode();
	return node;
}

BTreeNode* GetLeftSubTree(BTreeNode* node)
{
	return node->left;
}

BTreeNode* GetRightSubTree(BTreeNode* node)
{
	return node->right;
}

void SetData(BTreeNode* node, Data data)
{
	node->data = data;
}

Data GetData(BTreeNode* node)
{
	return node->data;
}

void MakeSubTree(BTreeNode* originNode, BTreeNode* newNode, SubTree subTree)
{
	assert(subTree == SUB_LEFT || subTree == SUB_RIGHT);

	switch (subTree)
	{
	case SUB_LEFT:
		if (originNode->left != nullptr)
		{
			free(originNode->left);
		}
		
		originNode->left = newNode;
		break;
	case SUB_RIGHT:
		originNode->right = newNode;
		break;
	}
}
void InorderTraverse(BTreeNode* node,Action action)
{
	if (node == nullptr)
		return;
	InorderTraverse(node->left,action);
	action(node->data);
	InorderTraverse(node->right,action);
}

void PreorderTraverse(BTreeNode* node, Action action)
{
	if (node == nullptr)
		return;
	
	action(node->data);
	PreorderTraverse(node->left, action);
	PreorderTraverse(node->right, action);
}

void PostorderTraverse(BTreeNode* node, Action action)
{
	if (node == nullptr)
		return;

	PostorderTraverse(node->left, action);
	PostorderTraverse(node->right, action);
	action(node->data);

}

void DeleteTree(BTreeNode* node)
{
	if (node == nullptr)
		return;

	DeleteTree(node->left);
	DeleteTree(node->right);

	cout << node->data << "delete ";
	delete node;
}

void ShowData(Data data)
{
	printf("%d ", data);
};


