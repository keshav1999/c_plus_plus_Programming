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
Node* kthelement(int n,int m,Node* head)
{
	Node* cur=head;
	while(n+1<m)
	{
        cur=cur->next;
       n++;
	}
	return cur;
}
int main()
{
	int n=0,m=0,k,d;
Node* head=createll(n);
cin>>k;
d=n-k+1;
Node* ans=kthelement(m,d,head);
cout<<ans->data;
return 0;
}