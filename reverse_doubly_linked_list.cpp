#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int data)
  {
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
  }
};
void reverse_doubly_linked_list(Node *head,Node *tail)
{
  for(Node *i=head,*j=tail;i!=j && i->prev!=j;i=i->next,j=j->prev)
  {
    swap(i->data,j->data);
  }
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void print_linkedList(Node* head)
{
    Node *curr_node=head;
    while(curr_node!=NULL)
    {
        cout<<curr_node->data<<" ";
        curr_node=curr_node->next;
    }
    cout<<endl;
}
int main()
{
  Node *head=NULL,*tail=NULL;
  while(true)
  {
    int x;
    cin>>x;
    if(x==-1)
      break;
    insert_at_tail(head,tail,x);
  }
  print_linkedList(head);
  reverse_doubly_linked_list(head,tail);
  print_linkedList(head);
}