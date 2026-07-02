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
void print_reverse(Node *temp)
{
  if(temp==NULL)
    return;
  print_reverse(temp->next);
  cout<<temp->data<<" ";
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
  tail->next=newnode;
  tail=newnode;
}

int main()
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
    print_reverse(head);
    
    return 0;
}