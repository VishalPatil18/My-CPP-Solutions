/*** 1st Solution ***/

/* 
	Given a linked list and two keys in it, swap nodes for two given keys. Nodes should be swapped by changing links. Swapping data of nodes may be expensive in many situations when data contains many fields. 
	
*/

#include <bits/stdc++.h> 
using namespace std; 

class Node { 
	public:
	int data;
	Node *next;
}; 

void swapNodes(Node **head_ref, int x, int y)  { 
	// Nothing to do if x and y are same 
	if (x == y) return; 

	// Search for x (keep track of prevX and CurrX 
	Node *prevX = NULL, *currX = *head_ref;

	while (currX && currX -> data != x) { 
		prevX = currX; 
		currX = currX -> next; 
	} 

	// Search for y (keep track of prevY and CurrY 
	Node *prevY = NULL, *currY = *head_ref; 
	while (currY && currY -> data != y) { 
		prevY = currY; 
		currY = currY -> next; 
	} 

	// If either x or y is not present, nothing to do 
	if (currX == NULL || currY == NULL) return; 

	// If x is not head of linked list 
	if (prevX != NULL) prevX -> next = currY; 
	// Else make y as new head
	else *head_ref = currY;

	// If y is not head of linked list 
	if (prevY != NULL) prevY->next = currX; 
	// Else make x as new head
	else *head_ref = currX; 

	// Swap next pointers 
	Node *temp = currY -> next; 
	currY -> next = currX -> next; 
	currX -> next = temp; 
} 

void push(Node** head_ref, int new_data) 
{ 
	/* allocate node */
	Node* new_node =new Node(); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

void printList(Node *node) 
{ 
	while(node != NULL) { 
		cout << node->data << " "; 
		node = node->next; 
	} 
} 

int main() 
{ 
	Node *start = NULL; 

	/* The constructed linked list is: 1->2->3->4->5->6->7 */
	push(&start, 7); 
	push(&start, 6); 
	push(&start, 5); 
	push(&start, 4); 
	push(&start, 3); 
	push(&start, 2); 
	push(&start, 1); 

	cout << "Linked list before calling swapNodes() "; 
	printList(start); 

	swapNodes(&start, 4, 3); 

	cout << "\nLinked list after calling swapNodes() "; 
	printList(start); 

	return 0; 
}