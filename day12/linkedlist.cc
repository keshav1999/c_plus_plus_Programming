#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node*next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};
Node* insert(Node* head, int x, Node* &tail)
{
	if (head == NULL)
	{
		head = new Node(x);
		tail = head;
		return head;
	}
	tail->next = new Node(x);
	tail = tail->next;
	return head;

};
Node* createll()
{
	int x;
	Node* head = NULL;
	Node* tail = NULL;
	while (true)
	{
		cin >> x;
		if (x == -1) break;
		head = insert(head, x, tail);
	}
	return head;
}
void printLL(Node* head)
{
	Node* cur = head;
	while (cur != NULL)
	{
		cout << cur->data << "-->";
		cur = cur->next;
	}
}
Node* reverselist(Node* head)
{
	Node* prev = NULL;
	Node* nextnode = NULL;
	Node* current = head;
	while (current != NULL)
	{
		nextnode = current->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}
	return prev;
}
Node* recursivereverse(Node* current, Node* prevnode, Node* nextnode)
{
	if (current != NULL)
	{
		return prevnode;
	}
	nextnode = current->next;
	current->next = prevnode;
	recursivereverse(nextnode, current, nextnode);
}
int main()
{
	Node* head = createll();
	Node* head1 = recursivereverse(head, NULL, NULL);
	printLL(head1);
	return 0;
}