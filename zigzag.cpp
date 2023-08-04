// C++ program to print level order traversal
// in spiral form using a single dequeue
#include <bits/stdc++.h>

struct Node {
	int data;
	struct Node *left, *right;
};

// A utility function to create a new node
struct Node* newNode(int data)
{
	struct Node* node = new struct Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

// function to print the level order traversal
void levelOrder(struct Node* root, int n)
{
	// We can just take the size as H+N which
	// implies the height of the tree with the
	// size of the tree
	struct Node* queue[2 * n];
	int top = -1;
	int front = 1;
	queue[++top] = NULL;
	queue[++top] = root;
	queue[++top] = NULL;

	// struct Node* t=root;
	int prevFront = 0, count = 1;
	while (1) {

		struct Node* curr = queue[front];

		// A level separator found
		if (curr == NULL) {

			// If this is the only item in dequeue
			if (front == top)
				break;

			// Else print contents of previous level
			// according to count
			else {
				if (count % 2 == 0) {
					for (int i = prevFront + 1; i < front; i++)
						printf("%d ", queue[i]->data);
				}
				else {
					for (int i = front - 1; i > prevFront; i--)
						printf("%d ", queue[i]->data);
				}

				prevFront = front;
				count++;
				front++;

				// Insert a new level separator
				queue[++top] = NULL;

				continue;
			}
		}

		if (curr->left != NULL)
			queue[++top] = curr->left;
		if (curr->right != NULL)
			queue[++top] = curr->right;
		front++;
	}

	if (count % 2 == 0) {
		for (int i = prevFront + 1; i < top; i++)
			printf("%d ", queue[i]->data);
	}
	else {
		for (int i = top - 1; i > prevFront; i--)
			printf("%d ", queue[i]->data);
	}
}

// Driver code
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(7);
	root->left->right = newNode(6);
	root->right->left = newNode(5);
	root->right->right = newNode(4);
	levelOrder(root, 7);

	return 0;
}
