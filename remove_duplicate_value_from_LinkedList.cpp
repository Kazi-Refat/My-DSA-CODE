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
void remove_duplicates_node(Node* head) {
    Node* curr_node = head;
    while (curr_node != NULL) {
        Node* temp = curr_node;
        while (temp->next != NULL) {
            if (curr_node->data == temp->next->data) 
            {
                Node* duplicateNode = temp->next;
                temp->next = temp->next->next; 
                delete duplicateNode; 
            } 
            else 
            {
                temp = temp->next;
            }
        }
        curr_node = curr_node->next;
    }
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
    remove_duplicates_node(head);
    print_linked_list(head);
    return 0;
}