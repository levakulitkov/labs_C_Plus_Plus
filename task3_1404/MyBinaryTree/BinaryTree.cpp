#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree()
{
	root = nullptr;
}

BinaryTree::BinaryTree(const int data)
{
	Insert(data);
}

BinaryTree::~BinaryTree()
{
	Clear(root);
}

void BinaryTree::Clear(TreeNode* TN)
{
	if (TN)
	{
		Clear(TN->left);
		Clear(TN->right);
		delete TN;
	}
}

TreeNode* BinaryTree::Search(const int data)
{
	auto temp = root;
	while (temp != nullptr && temp->data != data)
	{
		if (data < temp->data)
		{
			if (Search(data, temp->left)) { return temp->left; }
			else { temp = temp->left; }
		}
		else
		{
			if (Search(data, temp->right)) { return temp->right; }
			else { temp = temp->right; }
		}
	}
	if (temp == nullptr) { return nullptr; }
	else { return temp; }
}

bool BinaryTree::Search(const int data, TreeNode* TN)
{
	if (TN != nullptr && TN->data == data)
	{
		return 1;
	}
	else return 0;
}

void BinaryTree::Insert(const int data)
{
	if (root == nullptr)
	{
		root = new TreeNode(data);
	}
	else
	{
		Insert(data, root);
	}
}

void BinaryTree::Insert(const int data, TreeNode* TN)
{
	TreeNode* temp = TN;
	while (temp->left != nullptr || temp->right != nullptr)
	{
		if (data < temp->data)
		{
			if (temp->left == nullptr)
			{
				temp->left = new TreeNode(data);
				return;
			}
			else { temp = temp->left; }
		}
		else
		{
			if (data > temp->data)
			{
				if (temp->right == nullptr)
				{
					temp->right = new TreeNode(data);
					return;
				}
				else { temp = temp->right; }
			}
			else 
			{ 
				std::cout << "Значение " << data << " не было добавлено в дерево, потому что не уникально" << std::endl;
				return;
			}
		}

	}
	if (data < temp->data)
	{
		temp->left = new TreeNode(data);
	}
	else 
	{
		if (data > temp->data)
		{
			temp->right = new TreeNode(data);
		}
		else { std::cout << "Значение " << data << " не было добавлено в дерево, потому что не уникально" << std::endl; }
	}
}

void BinaryTree::CreateMinimalBST(int* arr, int first, int last)
{
	if (last < first) { return; }
	int mid = int(floor((first + last) / 2));
	Insert(arr[mid]);
	CreateMinimalBST(arr, first, mid - 1);
	CreateMinimalBST(arr, mid + 1, last);
}
