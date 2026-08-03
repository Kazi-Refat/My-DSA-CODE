#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
      this->data=val;
      this->left=NULL;
      this->right=NULL;
    }
};
Node *input_tree()
{
  int val;
  cin>>val;
  Node *root;
  if(val==-1)
  {
    root=NULL;
    return root;
  }
  else
    root=new Node(val);
  queue<Node *> q;
  q.push(root);
  while(!q.empty())
  {
    Node *p=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node *left=NULL,*right=NULL;
    if(l!=-1)
      left=new Node(l);
    if(r!=-1)
      right=new Node(r);
    p->left=left;
    p->right=right;
    if(p->left)
      q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
  return root;
}

int find_nodes(Node *root,int val)
{
  if(root==NULL)
    return 0;
  if(root->data==val)
    return 1;
  int l=find_nodes(root->left,val);
  int r=find_nodes(root->right,val);
  if(l==1 || r==1)
    return 1;
  else
    return 0;
}
int main()
{
  Node *root=input_tree();
  int flag=find_nodes(root,2);
  if(flag==1)
    cout<<"True";
  else
    cout<<"False";
  return 0;
}