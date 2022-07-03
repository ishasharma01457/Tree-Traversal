#include <iostream>
#include<conio.h>
using namespace std;
struct Node {
	int y;
	struct Node *left, *right;
};
Node* newNode(int y)
{
	Node* temp = new Node;
	temp->y = y;
	temp->left = temp->right = NULL;
	return temp;
}
void Postorder(struct Node* node)
{
	if (node == NULL)
		return;
    Postorder(node->left);
    Postorder(node->right);
    cout << node->y << " ";
}
void Inorder(struct Node* node)
{
	if (node == NULL)
		return;
    Inorder(node->left);
    cout << node->y << " ";
    Inorder(node->right);
}
void Preorder(struct Node* node)
{
	if (node == NULL)
		return;
    cout << node->y << " ";

	Preorder(node->left);
    Preorder(node->right);
}
int main()
{
	struct Node* root = newNode(12);
	root->left = newNode(13);
	root->right = newNode(14);
	root->left->left = newNode(15);
	root->left->right = newNode(16);

	cout << "\nPreorder traversal\n";
	Preorder(root);

	cout << "\nInorder traversal\n";
	Inorder(root);

	cout << "\nPostorder traversal\n";
	Postorder(root);

	return 0;
}


