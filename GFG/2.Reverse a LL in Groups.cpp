// Reverse a Linked List in groups of given size.

/*=================================================================================*/
/* My Iterative Solution:
   ---------------------
*/
struct node *reverse (struct node *head, int k)
{ 
    node *prev, *curr, *nextNode, *link, *last;
    prev = NULL;
    curr = head;
    nextNode = curr -> next;
    
    int count = 0;
    while(curr != NULL){
        curr -> next = prev;
        if(prev == NULL) last = curr;
        prev = curr;
        curr = nextNode;
        if(curr != NULL) nextNode = curr -> next;
        count++;
        
        if(curr == NULL || count % k == 0){
            if(link != NULL) link -> next = prev;
            if(count == k) head = prev;
            link = last;
            prev = NULL;
        }
    }
    return head;
}

/*=================================================================================*/
/* GFG Solution:
   ------------
	- Reverse the first sub-list of size k.
	- While reversing keep track of the next node and previous node.
	- Let the pointer to the next node be next and pointer to the previous node be prev.
	- head->next = reverse(next, k)(Recursively call for rest of the list and link the two sub-lists)
	- Return prev (prev becomes the new head of the list)
*/

#include <bits/stdc++.h> 
using namespace std; 

class Node { 
	public: 
	int data; 
	Node* next; 
}; 

/* Reverses the linked list in groups of size k and returns the pointer to the new head node. */
Node *reverse (Node *head, int k) 
{ 
	Node* current = head; 
	Node* next = NULL; 
	Node* prev = NULL; 
	int count = 0; 
	
	/*reverse first k nodes of the linked list */
	while (current != NULL && count < k) { 
		next = current->next; 
		current->next = prev; 
		prev = current; 
		current = next; 
		count++; 
	}
	
	/* next is now a pointer to (k+1)th node Recursively call for the list starting from current. And make rest of the list as next of first node */
	if (next != NULL) 
	head->next = reverse(next, k); 

	/* prev is new head of the input list */
	return prev; 
} 

void push(Node** head_ref, int new_data) 
{ 
	/* allocate node */
	Node* new_node = new Node(); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref);	 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

void printList(Node *node) { 
	while(node != NULL) { 
		cout << node->data << " "; 
		node = node->next; 
	} 
} 

int main() 
{
	Node* head = NULL; 

	/* Created Linked list is 1->2->3->4->5->6->7->8->9 */
	push(&head, 9); 
	push(&head, 8); 
	push(&head, 7); 
	push(&head, 6); 
	push(&head, 5); 
	push(&head, 4); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 1);	 

	cout<<"Given linked list \n"; 
	printList(head); 
	head = reverse(head, 3); 

	cout<<"\nReversed Linked list \n"; 
	printList(head); 

	return(0); 
} 
