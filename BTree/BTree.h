#pragma once

typedef int Data;
typedef void (*Action)(Data);

enum  SubTree {SUB_LEFT,SUB_RIGHT};

struct BTreeNode
{
	Data       data;
	BTreeNode* left;
	BTreeNode* right;
};

BTreeNode* MakeTreeNode();

BTreeNode* GetLeftSubTree(BTreeNode* node);
BTreeNode* GetRightSubTree(BTreeNode* node);

void SetData(BTreeNode* node, Data data);
Data GetData(BTreeNode* node);

void MakeSubTree(BTreeNode* originNode, BTreeNode* newNode, SubTree subTree);

//������ȸ
void PreorderTraverse(BTreeNode* node, Action action);
//������ȸ
void InorderTraverse(BTreeNode* node, Action action);
//������ȸ
void PostorderTraverse(BTreeNode* node, Action action);

void DeleteTree(BTreeNode* node);
void ShowData(Data data);