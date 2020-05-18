#include "BinaryTree.h"


BinaryTree::BinaryTree()
{
	root = nullptr;
}

void BinaryTree::insertNode(int num)
{
	TreeNode *newNode = nullptr;
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = nullptr;

	insert(root, newNode);
}

void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if(nodePtr == nullptr)
		nodePtr = newNode;
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);
	else
		insert(nodePtr->right, newNode);
}

void BinaryTree::displayInOrder(TreeNode *nodePtr) const
{
	if(nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

void BinaryTree::displayPreOrder(TreeNode *nodePtr) const
{
    if(nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

void BinaryTree::displayPostOrder(TreeNode *nodePtr) const
{
	if(nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

void BinaryTree::remove(int num)
{
	deleteNode(num, root);
}

void BinaryTree::deleteNode(int num, TreeNode *&nodePtr)
{
	if(num < nodePtr->value)
		deleteNode(num, nodePtr->left);
	else if(num > nodePtr->value)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

void BinaryTree::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr = nullptr;

	if(nodePtr == nullptr)
		cerr << "Cannot delete empty node " << endl;
	
	else if(nodePtr->right == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;
		delete tempNodePtr;
	}

	else if(nodePtr->left == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}

	// if node has two children
	else
	{
       tempNodePtr = nodePtr->right;
	   while(tempNodePtr->left)
	   {   
		   tempNodePtr = tempNodePtr->left;
		   tempNodePtr->left = nodePtr->left;
		   tempNodePtr = nodePtr;
		   nodePtr = nodePtr->right;
		   delete tempNodePtr;
	   }
	}
	

}

void BinaryTree::destroySubTree(TreeNode *nodePtr)
{
	if(nodePtr)
	{
		if(nodePtr->left)
			destroySubTree(nodePtr->left);
		if(nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}

bool BinaryTree::searchNode(int num)
{
	TreeNode *nodePtr = root;

	while(nodePtr)
	{
		if(nodePtr->value == num)
			return true;
		else if(num < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}

return false;
}

int BinaryTree::count(TreeNode* root) {
   return (root == NULL)
     ? 0
     : count(root->left) + count(root->right) + 1;    
 }

BinaryTree::~BinaryTree()
{
	destroySubTree(root);
}
