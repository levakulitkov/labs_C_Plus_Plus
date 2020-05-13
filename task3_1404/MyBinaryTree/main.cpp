#include <iostream>
#include "BinaryTree.h"



int main()
{
	setlocale(LC_ALL, "ru");

	BinaryTree Tree;
	int Arr[] = {12, 23, 312, 412, 412, 6347, 745, 7457, 8887, 8888};
	Tree.CreateMinimalBST(Arr, 3, 9);
	return 0;
}
