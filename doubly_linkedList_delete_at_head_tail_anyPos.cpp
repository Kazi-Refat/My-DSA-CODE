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
void delete_at_head(Node* &head,Node* &tail)
{
    Node *deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_at_tail(Node* &head,Node* &tail)
{
    Node *deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_at_any_pos(Node *head,int idx)
{
    Node *curr_node=head;
    for(int i=1;i<idx-1;i++)
        curr_node=curr_node->next;
    Node *deletenode=curr_node->next;
    curr_node->next=curr_node->next->next;
    curr_node->next->prev=curr_node;
    delete deletenode;
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
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_tail(head,tail,30);
    insert_at_tail(head,tail,50);

    print_linkedList(head);
    //delete_at_head(head,tail);
    //delete_at_tail(head,tail);
    delete_at_any_pos(head,3);
    print_linkedList(head);
    return 0;
}