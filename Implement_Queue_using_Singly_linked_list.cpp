#include<bits/stdc++.h>
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
class myqueue
{
  public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val)    //O(1)
    {
      sz++;
      Node *newnode= new Node(val);
      if(head==NULL)
      {
        head=newnode;
        tail=newnode;
        return;
      }
      tail->next=newnode;
      tail=newnode;
    }
    void pop()        //O(1)
    {
      sz--;
      Node *deltenode=head;
      head=head->next;
      delete deltenode;
      if(head==NULL)
      {
        tail==NULL;
      }
    }
    int front()
    {
      return head->data;
    }
    int back()
    {
      return tail->data;
    }
    int size()
    {
      return sz;
    }
    bool empty()
    {
      return head==NULL;
    }
};
int main()
{
  myqueue q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    q.push(x);
  }

  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }

}