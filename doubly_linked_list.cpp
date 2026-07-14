#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int val;
  Node *next;
  Node *prev;

  Node(int val)
  {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
  }
};

int main()
{
  Node *head=new Node(10);
  Node *A=new Node(20);
  Node *tail=new Node(30);

  head->next=A;
  A->next=tail;

  tail->prev=A;
  A->prev=head;
  cout<<head->val<<" "<<head->next->val<<" "<<head->next->next->val<<endl;
  cout<<tail->val<<" "<<tail->prev->val<<" "<<tail->prev->prev->val;
}