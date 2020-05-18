#include <iostream>
using namespace std;

#pragma once
class BinaryTree
{
public:
	BinaryTree();
	void insertNode(int);
	bool searchNode(int);
	void count()
	{
		cout << count(root);
	};
	void remove(int);
	// recursive inline member functions
	void displayInOrder() const
	{ displayInOrder(root); }
	void displayPreOrder() const
	{ displayPreOrder(root); }
	void displayPostOrder() const
	{ displayPostOrder(root); }

	~BinaryTree();
private:
	struct TreeNode
	{
		int value;
		TreeNode *left;
		TreeNode *right;
	};
	TreeNode *root;
// Private member functions
	int BinaryTree::count(TreeNode* root);
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(int,TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;
};

