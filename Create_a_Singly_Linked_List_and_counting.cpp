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
int counting_linked_list(Node *head)
{
    Node *curr_node = head;
    int count = 0;
    while (curr_node != NULL)
    {
        count++;
        curr_node = curr_node->next;
    }
    return count;
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

    print_linked_list(head);
    cout << "size of the linked list: " << counting_linked_list(head) << endl;

    return 0;
}