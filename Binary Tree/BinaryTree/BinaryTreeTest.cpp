#include "BinaryTree.h"

int main()
{
	BinaryTree tree;

	cout << "Inserting nodes" << endl;
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);

	cout << "InOrder traversal: " << endl;
	tree.displayInOrder();
	cout << endl;

	cout << "PreOrder traversal: " << endl;
	tree.displayPreOrder();
	cout << endl;

	cout << "PostOrder traversal " << endl;
	tree.displayPostOrder();
	cout << endl;

	cout << "Total Number of Nodes " << endl;
	tree.count();
	cout << endl;

	system("pause>nul");
return 0;

}