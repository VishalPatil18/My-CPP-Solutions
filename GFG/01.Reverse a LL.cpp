// Iterative method
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node *prev, *curr, *nextNode;
    prev = NULL;
    curr = head;
    nextNode = curr -> next;
    
    while(curr != NULL) {
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        if(curr != NULL) nextNode = curr -> next;
    }
    head = prev;
}

/*=================================================================================*/
/* Recursive method:
   ----------------
	1) Divide the list in two parts - first node and 
      rest of the linked list.
	2) Call reverse for the rest of the linked list.
	3) Link rest to first.
	4) Fix head pointer
*/
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() {
		head = NULL;
	}

	Node* reverse(Node* head) {
		if (head == NULL || head->next == NULL) return head;

		/* reverse the rest list and put the first element at the end */
		Node* rest = reverse(head->next);
		head->next->next = head;

		head->next = NULL;

		/* fix the head pointer */
		return rest;
	}

	void print() {
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data) {
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{
	/* Start with the empty list */
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.head = ll.reverse(ll.head);

	cout << "\nReversed Linked list \n";
	ll.print();
	return 0;
}

/*=================================================================================*/
/* Using Stack method:
   ------------------
	- Store the nodes(values and address) in the stack until all the values are entered.
	- Once all entries are done, Update the Head pointer to the last location(i.e the last value).
	- Start popping the nodes(value and address) and store them in the same order until the stack is empty.
	- Update the next pointer of last Node in the stack by NULL.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Create a class Node to enter values and address in the list
class Node {
public:
	int data;
	Node* next;
};

// Function to reverse the linked list
void reverseLL(Node** head)
{
	// Create a stack "s" of Node type
	stack<Node*> s; 
	Node* temp = *head;
	while (temp->next != NULL) {
		// Push all the nodes in to stack
		s.push(temp); 
		temp = temp->next;
	}
	*head = temp;

	while (!s.empty()) {
		// Store the top value of stack in list
		temp->next = s.top(); 
	
		// Pop the value from stack
		s.pop(); 
	
		// update the next pointer in the list
		temp = temp->next; 
	}
	temp->next = NULL;
}

// Function to Display the elements in List
void printlist(Node* temp) 
{
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

// Program to insert back of the linked list
void insert_back(Node** head, int value)
{
	// we have used insertion at back method to enter values in the list.(eg: head->1->2->3->4->Null)
	Node* temp = new Node();
	temp->data = value;
	temp->next = NULL;
	
	// If *head equals to NULL
	if (*head == NULL) 
	{
	*head = temp;
	return;
	}
	else
	{
	Node* last_node = *head;
	while (last_node->next != NULL) 
	{
		last_node = last_node->next;
	}
	last_node->next = temp;
	return;
	}
}

int main()
{
	Node* head = NULL;

	insert_back(&head, 1);
	insert_back(&head, 2);
	insert_back(&head, 3);
	insert_back(&head, 4);
	cout << "Given linked list\n";
	printlist(head);
	reverseLL(&head);
	cout << "\nReversed linked list\n";
	printlist(head);
	return 0;
}

