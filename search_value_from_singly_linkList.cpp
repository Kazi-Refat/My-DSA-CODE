#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
  Node *newnode=new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  tail=newnode;
}
void print_linked_list(Node *head)
{
    Node *curr_node = head;
    while (curr_node != NULL)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << endl;
}
int main()
{
    int t;
		cin>>t;
		while(t--)
		{
			Node *head=NULL,*tail=NULL;
    	int val;
    	while(true)
    	{
      	cin>>val;
      	if(val==-1)
        	break;
      	insert_at_tail(head,tail,val);
    	}
			int x,index=0,flag=-1;
			cin>>x;
			for(Node *i=head;i!=NULL;i=i->next)
			{
				if(i->data==x)
				{
					flag=index;
					break;
				}
				index++;
			}
			cout<<flag<<endl;
		}
    
    
    return 0;
}