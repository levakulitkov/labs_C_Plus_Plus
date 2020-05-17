#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "TreeNode.h"


class BinaryTree
{
private:	
	

	bool Search(const int data, TreeNode* TN);
	void Insert(const int data, TreeNode* TN);

	TreeNode* root;

public:
	BinaryTree();
	BinaryTree(const int data);
	~BinaryTree();
	void Clear(TreeNode* TN);
	TreeNode* Search(const int data);
	void Insert(const int data);
	void CreateMinimalBST(int* arr, int first, int last);
};

#endif
