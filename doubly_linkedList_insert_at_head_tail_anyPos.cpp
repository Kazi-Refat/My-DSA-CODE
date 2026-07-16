#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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
void insert_at_anyPos(Node* &head,int idx,int val)
{
    Node *curr_node=head;
    for(int i=1;i<2;i++)
        curr_node=curr_node->next;
    Node *newnode=new Node(val);
    newnode->next=curr_node->next;
    curr_node->next->prev=newnode;
    curr_node->next=newnode;
    newnode->prev=curr_node;
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
    insert_at_head(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);
    print_linkedList(head);
    insert_at_anyPos(head,2,30);
    print_linkedList(head);
    return 0;
}