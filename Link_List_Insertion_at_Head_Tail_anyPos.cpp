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
void insert_at_head(Node* &head,int val)
{
    Node *newNode=new Node(val);
    newNode->next=head;
    head =newNode;
}
void insert_at_any_pos(Node* head,int indx,int val)
{
    Node *newNode=new Node(val);
    Node *curr_node=head;
    for(int i=1;i<indx;i++)
        curr_node=curr_node->next;
    newNode->next=curr_node->next;
    curr_node->next=newNode;
    
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
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
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = new Node(100);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = tail;
    
    //Node *head = NULL;
    //Node *tail = NULL;

    insert_at_head(head,1);
    insert_at_any_pos(head,6,70);
    insert_at_tail(head,tail,110);
    print_linked_list(head);
    

    return 0;
}