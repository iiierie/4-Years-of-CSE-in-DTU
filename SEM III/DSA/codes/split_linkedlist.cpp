#include <stdio.h>
#include <stdlib.h>

// A Linked List Node
struct Node
{
	int data;
	struct Node* next;
};

// Helper function to print a given linked list
void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d ",ptr->data );
		ptr = ptr->next;
	}
}

// Helper function to insert a new node at the beginning of the linked list
void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

// Return the total number of nodes in a list
int findLength(struct Node* head)
{
	int count = 0;
	struct Node* current = head;
	while (current != NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}

/*
	Split the given list's nodes into front and back halves
	and return the two lists using the reference parameters.
	If the length is odd, the extra node should go in the front list.
*/
void frontBackSplit(struct Node* source, struct Node** frontRef, struct Node** backRef)
{
	int len = findLength(source);
	if (len < 2)
	{
		*frontRef = source;
		*backRef = NULL;
		return;
	}

	struct Node* current = source;

	int hopCount = (len - 1) / 2;		// (figured these with a few drawings)
	for (int i = 0; i < hopCount; i++) {
		current = current->next;
	}

	// Now cut at current
	*frontRef = source;
	*backRef = current->next;
	current->next = NULL;
}

int main(void)
{
	// input keys
	int keys[] = {6, 3, 4, 8, 2, 9,10};
	int n = sizeof(keys)/sizeof(keys[0]);

	// points to the head node of the linked list
	struct Node* head = NULL;

	// construct a linked list
	for (int i = n-1; i >= 0; i--) {
		push(&head, keys[i]);
	}

	struct Node *a = NULL, *b = NULL;
	frontBackSplit(head, &a, &b);

	// print linked list
	printf("Front List: ");
	printList(a);

	printf("\nBack List: ");
	printList(b);

	return 0;
}