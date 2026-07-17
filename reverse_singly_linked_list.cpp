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
void reverse_singly_linked_list(Node* &head,Node* &tail,Node* temp)
{
  if(temp->next==NULL)
  {
    head=temp;
    return;
  }
  reverse_singly_linked_list(head,tail,temp->next);
  temp->next->next=temp;
  temp->next=NULL;
  tail=temp;
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
    Node *head=NULL,*tail=NULL;

    int val;
    while(true)
    {
      cin>>val;
      if(val==-1)
        break;
      insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    reverse_singly_linked_list(head,tail,head);
    print_linked_list(head);
    return 0;
}