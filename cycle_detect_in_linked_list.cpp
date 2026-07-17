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

int main()
{
  Node *head=new Node(10);
  Node *a=new Node(20);
  Node *b=new Node(30);
  Node *c=new Node(40);
  Node *tail=new Node(50);

  head->next=a;
  a->next=b;
  b->next=c;
  c->next=tail;
  tail->next=a;

  Node *hare=head;
  Node *tortoise=head; 
  int flag=0;
  while(hare!=NULL && hare->next!=NULL)
  {
    hare=hare->next->next;
    tortoise=tortoise->next;
    if(tortoise==hare)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    cout<<"Cycle Detected"<<endl;
  else
    cout<<"Cycle not Detected"<<endl;
  return 0;
}