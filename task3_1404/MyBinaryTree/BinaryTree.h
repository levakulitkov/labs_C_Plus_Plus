#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree
{
private:	
	class TreeNode
	{
	public:
		int getData()				{ return this->data; }
		void setData(const int data){ this->data = data; }
		TreeNode* getLeft()			{ return this->left; }
		void setLeft(TreeNode* TN)	{ this->left = TN; }
		TreeNode* getRight()		{ return this->right; }
		void setRight(TreeNode* TN)	{ this->right = TN; }

		TreeNode(const int data = int(), TreeNode* left = nullptr, TreeNode* right = nullptr)
		{
			this->data = data;
			this->left = left;
			this->right = right;
		}

		int data;
		TreeNode* left;
		TreeNode* right;
	};

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
