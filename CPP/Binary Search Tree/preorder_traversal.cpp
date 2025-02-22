// C++ program for preorder tree traversal
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
	int data;
	struct Node *left, *right;
};

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

/* Given a binary tree, print its nodes in preorder*/
void printpreorder(struct Node* node)
{
	if (node == NULL)
		return;

    /* first print the data of node */
	cout << node->data << " ";

	/* then recur on left child */
	printpreorder(node->left);

	/* now recur on right child */
	printpreorder(node->right);
}

/* Driver code*/
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Function call
	cout << "\nPreorder traversal of binary tree is \n";
	printpreorder(root);

	return 0;
}
