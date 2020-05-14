#include <iostream>
#include "BinaryTree.h"


int main()
{
	setlocale(LC_ALL, "ru");

	BinaryTree Tree;
	int Arr[] = {2, 4, 5, 7, 9, 12, 23, 312, 412, 745, 6347, 7457, 8887, 8888};
	Tree.CreateMinimalBST(Arr, 2, 13);
	return 0;
}
