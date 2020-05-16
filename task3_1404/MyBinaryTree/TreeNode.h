#ifndef TREENODE_H
#define TREENODE_H


class TreeNode
{
public:
	int getData() { return this->data; }
	void setData(const int data) { this->data = data; }
	TreeNode* getLeft() { return this->left; }
	void setLeft(TreeNode* TN) { this->left = TN; }
	TreeNode* getRight() { return this->right; }
	void setRight(TreeNode* TN) { this->right = TN; }

	TreeNode(const int data = int(), TreeNode* left = nullptr, TreeNode* right = nullptr)
	{
		this->data = data;
		this->left = left;
		this->right = right;
	}
	
private:
	int data;
	TreeNode* left;
	TreeNode* right;
	
	friend class BinaryTree;
};


#endif // TREENODE_H
