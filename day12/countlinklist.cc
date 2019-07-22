#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node*next;
	Node(int d)
	{
		data =d;
		next=NULL;
	}
};
Node* insert(Node* head,int x,Node* &tail)
{
	if(head==NULL)
	{
		head=new Node(x);
		tail=head;
		return head;
	}
	tail->next=new Node(x);
	tail=tail->next;
	return head;

};
Node* createll(int &count)
{
	int x;
	Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
    	cin>>x;
    	if(x==-1) break;
    	head=insert(head,x,tail);
    	count++;
    }
    return head;

}
int midpoint(int &n,int &m,Node* head)
{
 Node*cur=head;
 while(m==n/2+1)
 {
 	 cur=cur->next;
 	 return cur->data;
 	 	m++;
 }

}
void printLL(Node* head){
    Node* cur = head;
    while(cur != NULL){
        cout << cur->data << "-->";
        cur = cur->next;
    }
}
int main()
{
	int n=0,m=0;
Node* head=createll(n);
cout<<n<<endl;
printLL(head);
cout<<endl;
cout<<midpoint(n,m,head);
return 0;
}