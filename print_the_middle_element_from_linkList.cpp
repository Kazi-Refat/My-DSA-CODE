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
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *tail = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    print_linked_list(head);
    int n = counting_linked_list(head);
    if (n % 2 == 0)
    {
        Node *curr_node = head;
        for (int i = 1; i < n / 2 ; i++)
        {
            curr_node = curr_node->next;
        }
        cout << curr_node->data << " " << curr_node->next->data;
    }
    else
    {
        Node *curr_node = head;
        for (int i = 0; i < n / 2 ; i++)
        {
            curr_node = curr_node->next;
        }
        cout << curr_node->data;
    }

    return 0;
}