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
void Delete_at_head(Node* &head)
{
  if(head==NULL)
    return;
  Node *deleteNode=head;
  head=head->next;
  delete deleteNode;
}
void Delete_at_any_pos(Node* &head,int indx)
{
  if(indx==0)
  {
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
    return;
  }
  Node *curr_node=head;
  for(int i=1;i<indx;i++)
  {
    curr_node=curr_node->next;
  }
  Node *deleteNode=curr_node->next;
  curr_node->next=curr_node->next->next;
  delete deleteNode;
  
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
    /*******    DELETE AT HEAD  ********/
    print_linked_list(head);
    Delete_at_head(head);
    print_linked_list(head);
    /*******    DELETE AT ANY POSITION  ********/
    // print_linked_list(head);
    // Delete_at_any_pos(head,0);
    // print_linked_list(head);
    /*******      DELETE AT TAIL     ********/
    // print_linked_list(head);
    // Delete_at_any_pos(head,tail,n-1);
    // print_linked_list(head);
    return 0;
}