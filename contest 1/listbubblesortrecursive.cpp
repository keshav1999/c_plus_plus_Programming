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
Node* createll(int &count, int N)
{
    int x, i = 0;
    Node* head = NULL;
    Node* tail = NULL;
    while (i < N)
    {
        cin >> x;
        head = insert(head, x, tail);

        count++;
        i++;
    }
    return head;

}
Node* bubblesort(Node*head,  int N)
{
    Node*ini=head;

    if (N<0)
    {
        return ini;
    }


    for (int i = 0; i < N-1; i++)
    {
        if (ini->data > ini->next->data)
        {
            swap(ini->data, ini->next->data);
        }
        ini=ini->next;
    }
    bubblesort(head, N-1);
}
void printLL(Node* head, int n) {
    Node* cur = head;
    for (int i = 0; i < n; i++) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}
int main()
{
    int n = 0, m = 0, N;
    cin >> N;
    Node* head = createll(n, N);
    Node* my = bubblesort(head,  N) ;
    printLL(my, N);
    return 0;
}