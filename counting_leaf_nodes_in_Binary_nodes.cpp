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

int count_leaf_nodes(Node *root)
{
  if(root==NULL)
    return 0;
  if(root->left==NULL && root->right==NULL)
    return 1;
  int l=count_leaf_nodes(root->left);
  int r=count_leaf_nodes(root->right);
  return r+l;
}
int main()
{
  Node *root=input_tree();
  cout<<count_leaf_nodes(root);

  return 0;
}